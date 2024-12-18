/*p29
FARMER PROBLEM STATEMENT

Mahesh is a farmer and owns 80 acres of land. His land is equally divided into 5 segments. He grows tomatoes in the 1st segment, potatoes in the 2nd segment, cabbage in the 3rd segment, sunflower in the 4th segment and sugarcane in the 5th segment.
He is converting his land from chemical-driven farming to chemical-free farming. Mahesh starts with the conversion of vegetables into chemical-free produce. He spends the first 6 months doing the same.
He then converts the sunflower land bank into chemical-free farming. This takes him another 4 months. Finally, he converts sugarcane into chemical-free farming over the next 4 months.
He gets a yield of the following for tomatoes. 30% of his tomato land gives him 10 tonne yield per acre.
The remaining 70% of his tomato land gives him 12 tonnes yield per acre.
The selling price of tomato is Rs. 7 per Kg.
The yield of potatoes is 10 tonnes per acre. He sells each kg at Rs. 20.
The yield of cabbage is 14 tonnes per acre. He sells each kg at Rs. 24.
The yield of sunflowers is 0.7 tonnes per acre. He sells each kg at Rs. 200.
The yield of sugarcane is 45 tonnes per acre. He sells each tonne at Rs. 4,000.
All the crops are sowed at the same time. Mahesh gets the above yield at the above-mentioned rate in one crop cycle across his entire land of 80 acres.
What is
a. The overall sales achieved by Mahesh from the 80 acres of land.
b. Sales realisation from chemical-free farming at the end of 11 months?

total_land = 80
no_of_segments = 5
each_segment = total_land // no_of_segments

tamoto_yield_tonnes = (each_segment * 0.3 * 10) + (each_segment * 0.7 *12)
tomato_sales_amount = int(tamoto_yield_tonnes * 1000 * 7)

potato_yeild_tonnes = each_segment * 10
potato_sales_amount = potato_yeild_tonnes * 1000 * 20

cabbage_yeild_tonnes = each_segment * 14
cabbage_sales_amount = cabbage_yeild_tonnes * 1000 * 24

sunflower_yeild_tonnes = each_segment * 0.7
sunflower_sales_amount = int(sunflower_yeild_tonnes * 1000 * 200)

sugarcane_yeild_tonnes = each_segment * 45
sugarcane_sales_amount = sugarcane_yeild_tonnes * 4000 
---------------------------------------------------------------------
//p31
//Find sum of Odd digits in a number
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    }

    printf("Sum of odd digits: %d\n", sum);

    return 0;
}

//----------------------------------------------------------------
//p32
//Check if a number is Palindrome
#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
//-------------------------------------------------------------------------

//Find sum of Odd placed Odd digits in a number

#include <stdio.h>

int main() {
    int num, sum = 0, digit, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (position % 2 != 0) {
            if (digit % 2 != 0) {
                sum += digit;
            }
        }
        num /= 10;
        position++;
    }

    printf("Sum of odd placed odd digits: %d\n", sum);

    return 0;
}
//--------------------------------------------------------------
//Find sum of Even placed Even digits in a number
#include <stdio.h>

int main() {
    int num, sum = 0, digit, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (position % 2 == 0) {
            if (digit % 2 == 0) {
                sum += digit;
            }
        }
        num /= 10;
        position++;
    }

    printf("Sum of even placed even digits: %d\n", sum);

    return 0;
}
//-------------------------------------------------------------------*/
