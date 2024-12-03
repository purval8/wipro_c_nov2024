//5. Swap the 1st half of an Array with the 2nd half elements.
#include <stdio.h>

void swapHalves(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[i + n / 2];
        arr[i + n / 2] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n % 2 != 0) {
        printf("Array size must be even.\n");
        return 0;
    }
    
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    swapHalves(arr, n);
    
    printf("Array after swapping halves: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}