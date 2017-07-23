#ifndef NAV_ALGORITHM_H
#define NAV_ALGORITHM_H


void print_array(int arr[], int arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int arr[], int arr_size) {
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

#endif