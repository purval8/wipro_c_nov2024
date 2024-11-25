#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of lines (N): ");// Take the number of lines as input from the user
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { // Loop to print each line of stars
        
        for (int j = 1; j <= i; j++) { // Loop to print stars in each line
            printf("*");
        }
        printf("\n");// Move to the next line after printing stars for this row
    }
    return 0;
}
