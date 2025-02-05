#include <stdio.h>
#include <stdlib.h>

char *input(){
    int length = 0; // the length of the array inputting
    char *input = (char*)malloc(sizeof(char) * length);

    // if there exists any character which is not input, keep inputting
    char ch;
    while((ch = getchar()) != '\n' && ch != EOF){
        length = length + 1;
        input = (char*)realloc(input, length * sizeof(char)); 
        input[length - 1] = ch;
    }

    // add a '\0' at the end of array
    length = length + 1;
    input = (char*)realloc(input, length * sizeof(char));
    input[length - 1] = '\0';
    fflush(stdin); // Clear input buffer

    return input;
}