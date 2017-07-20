#include <iostream>
#include <algorithm>
using namespace std;

void print_array(int arr[], int arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void quick_sort(int arr[], int arr_size) {
    int loop_count = arr_size-2;

    while (loop_count >= 0) {
        for (size_t i = 0; i <= loop_count; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
        loop_count--;
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {10, 2, 3, 1, 5, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, arr_size);
    print_array(arr, arr_size);
    return 0;
}
