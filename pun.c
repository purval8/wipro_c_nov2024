/*#include <stdio.h>
#include <stdlib.h>
// Find sum of Even placed Even digits in a number
int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);
    while (inputNumber != 0)
    {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;
        if (flip == 0)
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of Even placed Even digits is %d", sumOfDigits1);
    else
        printf("Sum of Even placed Even digits is %d", sumOfDigits2);
}

#include <stdio.h>

int main()
{
    char ch;
    int num;
    float fnum;
    double dnum;
    short int snum;
    long int lnum;
    long long int llnum;
    printf("Size of char (ch) = %d \n", sizeof(char));                      // sizeof(ch)
    printf("Size of int (num) = %d \n", sizeof(num));                       // sizeof(ch)
    printf("Size of float (fnum) = %d \n", sizeof(float));                  // sizeof(ch)
    printf("Size of double (dnum) = %d \n", sizeof(double));                // sizeof(ch)
    printf("Size of short int (snum) = %d \n", sizeof(snum));               // sizeof(ch)
    printf("Size of long int (lnum) = %d \n", sizeof(lnum));                // sizeof(ch)
    printf("Size of long long int (llnum) = %d \n", sizeof(long long int)); // sizeof(ch)
}

#include <stdio.h>
// program to understand bitwise operators

int main()
{
    int num1 = 23, num2 = 12, result = 0;

    result = num1 & num2;
    printf("X & Y = %d \n", result);
    result = num1 | num2;
    printf("X | Y = %d \n", result);
    result = num1 ^ num2;
    printf("X ^ Y = %d \n", result);
    result = num1 >> 3; // num1 is immutable (copy of num1 is modified)
    printf("X >> 3 = %d \n", result);
    result = num2 << 2; // num2 is immutable (copy of num2 is modified)
    printf("Y << 2 = %d \n", result);
}

#include <stdio.h>
// Program to print a number in different formats/base.

int main()
{
    int num = 79;
    printf("%d  %i  %o  %x  %X \n", num, num, num, num, num);
    // 79  79 117  4f  4F
    int num2 = 0173;
    printf("%d  %i  %o  %x  %X \n", num2, num2, num2, num2, num2);
    //     123 123  173 7b  7B
    int num3 = 0x5d;
    printf("%d  %i  %o  %x  %X \n", num3, num3, num3, num3, num3);
    //     94   94  136 5d  5D
}

#include <stdio.h>
// Program to do formatting on int number.
int main() {
    int num = 7955;
    printf("%d\n", num);     // print num
    printf("%6d\n", num);    // Allocate 6 character spaces and print num with right allignment
    printf("%-6d\n", num);   // Allocate 6 character spaces and print num with left allignment
    printf("%-6d**\n", num); // Allocate 6 character spaces and print num with left allignment and after that print 2 stars
    printf("%07d\n", num);   // Allocate 6 character spaces and print num with right allignment and in empty spaces fill it with zeroes
    printf("%3d\n", num);    // Allocate 3 character spaces and print num with right allignment [Here formatting is ignored and data is given priority]
}


#include <stdio.h> 

// Program to understand type casting
int main() {
    int num = 17 / 3;           // No Casting at all
    printf("%d  %f", num, num); // 5   0.000000
}*/

int findSquare(int);
