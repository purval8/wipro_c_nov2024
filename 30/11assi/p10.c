// 10. Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.

#include <stdio.h>

void convertElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] -= 1;  // Convert even to odd
        } else {
            arr[i] += 1;  // Convert odd to even
        }
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    convertElements(arr, n);

    printf("Array after conversion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
