//3. Swap consecutive elements of an Array using a for loop.

#include <stdio.h>

void swapConsecutive(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i += 2) {
        
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swapConsecutive(arr, n); 

    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}