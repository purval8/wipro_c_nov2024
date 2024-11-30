#include <stdio.h>
#include <string.h>


void concatenateStrings(char *str1, const char *str2) {
    
    strcat(str1, str2);
}

int main() {
    
    char str1[100] = "string, ";
    char str2[] = "concatenation";

    concatenateStrings(str1, str2);

    printf("print the Concatenated String: %s\n", str1);

    return 0;
}