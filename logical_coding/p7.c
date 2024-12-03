
//7. Count the times an element is present in an Array

#include <stdio.h>

int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int result = countOccurrences(arr, n, key);
    printf("The element %d occurs %d times in the array.\n", key, result);

    return 0;
}
