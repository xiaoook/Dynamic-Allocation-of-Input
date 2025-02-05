#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DyInput.h"

int main(){
    printf("Please input a string: ");
    char *text = input(); 
    // A pointer point to the address of dynamic allocated memory is needed

    printf("%s%s\n", "You have entered: ", text);
    printf("The string has %lu character(s)\n", strlen(text));

    free(text); // Since the array is dynamic allocated, you should always remember to free it

    return 0;
}