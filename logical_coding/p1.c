
/*
//1. Find sum of the elements of an Array using a recursive function.
#include <stdio.h>

int sum(int arr[], int index) {
    if (index == 0) {
        return arr[0];
    }
    return arr[index] + sum(arr, index - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum: %d\n", sum(arr, n - 1));
    return 0;
}*/
