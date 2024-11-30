/*Why an un initialized pointer is called as wild pointer ?

float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

print these:

fArray, fArray+1, fArray-1, fArray+2
// All of these are addresses


*fArray, *fArray+1, *fArray + *fArray
// All of these are values


&fArray, &fArray+1, &fArray-1, &fArray+2
// All of these are addresses*/
#include <stdio.h>

int main() {
    float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

    // Print the addresses
    printf("fArray: %p\n", fArray);
    printf("fArray + 1: %p\n", fArray + 1);
    printf("fArray - 1: %p\n", fArray - 1);
    printf("fArray + 2: %p\n", fArray + 2);

    // Print the values
    printf("*fArray: %.2f\n", *fArray);
    printf("*fArray + 1: %.2f\n", *fArray + 1);
    printf("*fArray + *fArray: %.2f\n", *fArray + *fArray);

    // Print addresses of fArray and increments
    printf("&fArray: %p\n", (void*)&fArray);
    printf("&fArray + 1: %p\n", (void*)&fArray + 1);
    printf("&fArray - 1: %p\n", (void*)&fArray - 1);
    printf("&fArray + 2: %p\n", (void*)&fArray + 2);

    return 0;
}
