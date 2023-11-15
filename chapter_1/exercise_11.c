#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int input, countCharacters, countRows, countWords, state;

    state = OUT;
    countCharacters = countRows = countWords = 0;

    while((input = getchar()) != EOF) {
        ++countCharacters;

        if(input == '\n') {
            ++countRows;
        }

        if(input == ' ' || input == '\n' || input == '\t') {
            state = OUT;
        } else if(state == OUT) {
            state = IN;
            ++countWords;
        }
    }

    printf("Number of characters = %d\n", countCharacters);
    printf("Total number of lines = %d\n", countRows);
    printf("Total number of words = %d", countWords);
}