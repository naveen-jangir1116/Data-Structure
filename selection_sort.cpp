#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int arr_size) {
    if (arr_size == 1)
        return;

    int start_index = 0, min_index;
    while (start_index <= arr_size-2) {
        min_index = start_index;
        for (size_t i = start_index+1; i <= arr_size-1; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        swap(arr[start_index], arr[min_index]);
        start_index++;
    }
}

void print_array(int arr[], int arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    int arr[] = {10};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, arr_size);
    print_array(arr, arr_size);
    return 0;
}
