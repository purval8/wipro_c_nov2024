// 4. Implement Linear(sequential) search using a multi file program.

//search.h (Header file)

#ifndef SEARCH_H
#define SEARCH_H

int linearSearch(int arr[], int size, int key);

#endif

//search.c (Function file)

#include "search.h"

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}


// main.c (Main program file)

#include <stdio.h>
#include "search.h"

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    
    int result = linearSearch(arr, size, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}