#include <iostream>
#include <algorithm>
using namespace std;

#include "nav_algorithm.h"
#include "nav_helper.h"

int main(int argc, char const *argv[]) {
    int arr[] = {10, 2, 3, 1, 5, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, arr_size);
    print_array(arr, arr_size);
    return 0;
}
