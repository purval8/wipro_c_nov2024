//6. Implement Karpekar's constant program. Print the number of times the logic of finding the difference of 2 numbers had to be iterated.

#include <stdio.h>
#include <stdlib.h>

int rearrangeDigits(int num, int descending) {
    int digits[4];
    int i, j, temp;

    for (i = 0; i < 4; i++) {
        digits[i] = num % 10;
        num /= 10;
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if ((descending && digits[i] < digits[j]) || (!descending && digits[i] > digits[j])) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    num = 0;
    for (i = 0; i < 4; i++) {
        num = num * 10 + digits[i];
    }

    return num;
}

int main() {
    int num, count = 0;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a 4-digit number.\n");
        return 0;
    }

    while (num != 6174) {
        int descending = rearrangeDigits(num, 1);
        int ascending = rearrangeDigits(num, 0);

        num = descending - ascending;
        count++;

        printf("Iteration %d: %d - %d = %d\n", count, descending, ascending, num);
    }

    printf("Reached Kaprekar's constant 6174 after %d iterations.\n", count);
    return 0;
}
