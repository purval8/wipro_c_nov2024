//Reverse the elements of an Array using a while loop (Array)
#include <stdio.h>
#include "rev.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, n);
    
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}