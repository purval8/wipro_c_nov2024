#include <stdio.h>

int main() {
    float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};
    
    printf("fArray: %p\n", fArray);

    printf("%u  %u  %u  %u \n", fArray, fArray+1, fArray-1, fArray+2);

    printf("%u  %u  %u  %u \n", *fArray, *fArray+1, *fArray + *fArray);

    printf("%u  %u  %u  %u \n", &fArray, &fArray+1, &fArray-1, &fArray+2);
}


/*print these:

fArray, fArray+1, fArray-1, fArray+2
// All of these are addresses
 
 *fArray, *fArray+1, *fArray + *fArray
// All of these are values
 
 &fArray, &fArray+1, &fArray-1, &fArray+2
// All of these are addresses

* A 2D array is actually 1D array in memory/physically
* Name of an array is always address of the 1st element in the array.
* Thus, name of the array + 1 will be the address of 2nd element in the array. 
* When we apply * to name of the 1D array, then we get the value of 1st element of the array.
* When we apply & to the name of the array, it behaves like address of the whole array. Thus, &array+1 will give the address of next 1D array*/
