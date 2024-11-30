
/*//Print the Fibo series of N terms (1st 2 terms are 1 and 2)
#include <stdio.h>

#include <stdio.h>

void fibonacci(int n, int first, int second) {
    if (n == 0) {
        return;
    }
    printf("%d ", first);
    fibonacci(n - 1, second, first + second);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n >= 1) printf("1 ");
    if (n >= 2) printf("2 ");
    fibonacci(n - 2, 1, 2);
    printf("\n");
    return 0;
}

}
//Find smallest number in an array of size N

#include <stdio.h>

int findSmallest(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int min = findSmallest(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
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
    printf("Smallest number: %d\n", findSmallest(arr, n));
    return 0;
}

}

//Find sum of digits of a number
#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits: %d\n", sumOfDigits(n));
    return 0;
}


*/