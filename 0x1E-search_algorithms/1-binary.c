#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Print the array being searched
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Not found
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 12;
    
    printf("Index of %d: %d\n", value, binary_search(array, size, value));
    
    return 0;
}
