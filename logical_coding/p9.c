//9. Find the smallest and biggest elements of the array of size N which is given by user (array is of type double)


#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    double arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double smallest = arr[0], largest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Smallest element: %.2lf\n", smallest);
    printf("Largest element: %.2lf\n", largest);
    
    return 0;
}
