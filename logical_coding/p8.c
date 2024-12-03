//8. Remove duplicate elements from the Array and shift the
//elements (If n duplicate elements are removed then n zeroes should trail in the array)

#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = 0;
                }
            }
        }
    }
    
    k = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[k++] = arr[i];
        }
    }
    
    while (k < n) {
        arr[k++] = 0;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    removeDuplicates(arr, n);
    
    printf("Array after removing duplicates and shifting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
