/*//14.Check if a number is perfect square
#include <stdio.h>

int main() {
    int num, sqrt_num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

   
    sqrt_num = (int)sqrt(num);

   
    if (sqrt_num * sqrt_num == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
//---------------------------------------------------------------------------------------
//15.Check if a character is an alphabet
#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
//----------------------------------------------------------------------------------
//16.Check if a character is an alphanumeric

#include <stdio.h>
#include <ctype.h>  // For isalnum() function

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (isalnum(ch)) {
        printf("%c is an alphanumeric character.\n", ch);
    } else {
        printf("%c is not an alphanumeric character.\n", ch);
    }

    return 0;
}
//------------------------------------------------------------------------------------
//17.Check if a character is a digit

#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
//-----------------------------------------------------------------------------------
//18.Check if a letter is small case

#include <stdio.h>
#include <ctype.h>  // For islower() function

int main() {
    char ch;

    // Input the character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase letter (a-z)
    if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not a lowercase letter.\n", ch);
    }

    return 0;
}
//-------------------------------------------------------------------------------------------
//19.Check if a year is Leap year

#include <stdio.h>

int main() {
    int year;

    
    printf("Enter a year: ");
    scanf("%d", &year);

   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
//------------------------------------------------------------------------------------------------------
20. Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
Allow the person to go out only if it is:
	1. only sunny
	2. sunny and raining

#include <stdio.h>

int main() {
    char raining, sunny, cloudy;

   
    printf("Enter weather conditions:\n");
    printf("Is it raining (r for Yes, any other character for No): ");
    scanf(" %c", &raining);  // Adding space before %c to clear any buffer
    printf("Is it sunny (s for Yes, any other character for No): ");
    scanf(" %c", &sunny);
    printf("Is it cloudy (c for Yes, any other character for No): ");
    scanf(" %c", &cloudy);

   
    if ((sunny == 's' && raining != 'r') || (sunny == 's' && raining == 'r')) {
        printf("You can go out.\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}
*/