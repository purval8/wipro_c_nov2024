
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
}