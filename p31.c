//31.Find sum of Odd digits in a number


#include <stdio.h>

int main() {
    int inputNum =0;
    int reminderDigit = 0;
    int  sum = 0;

    printf("Enter a number to find sum digit : ");
    scanf("%d", &inputNum);

    while (inputNum!= 0) {
        reminderDigit = inputNum % 10; 

        if (reminderDigit % 2 != 0) {
            sum += reminderDigit; 
        }

        inputNum = inputNum / 10; 
    }

    
    printf("Sum of odd digits: %d\n", sum);

    return 0;
}



 
 
