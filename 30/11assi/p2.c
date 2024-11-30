
/*//Reverse the elements of an Array using a while loop (Array)
#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

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

//1. Find the sum of the elements of an Array using a recursive function (Array)
#include <stdio.h>

double findSum(double arr[], int n) {
    
    if (n <= 0) {
        return 0;
    }
    
    return arr[n - 1] + findSum(arr, n - 1);
}

int main() {
    double arr[] = {1.5, 2.5, 3.5, 4.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double sum = findSum(arr, n);
    printf("Sum of the array elements: %.2lf\n", sum);
    return 0;
}*/