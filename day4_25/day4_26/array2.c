#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    double arr[N]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%lf ", &arr[i]);
    }

    double smallest = arr[0], largest = arr[0];  

    for (int i = 1; i < N; i++) {     
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The smallest element in the array is: %.2lf %u \n", smallest); 
    printf("The largest element in the array is:  %.2lf %u \n", largest);

    return 0;
}
/*Problems on Arrays:
1. Find the smallest and biggest elements of the array of size N which is given by user (array is of type double)
2. Find the frequesvy of an element of user choice in an raay of size N which is also given user (array is of type int)
3. Reverse an array of size N of type float
4. Remove duplicate elements in an array. After removal, the position of the removed elements must not be empty.

has context menu */
