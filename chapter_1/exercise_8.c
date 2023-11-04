#include <stdio.h>

int main() {
    int input;
    int countBlank, countTab, countNewline;

    countBlank = 0;
    countTab = 0;
    countNewline = 0;

    while((input = getchar()) != EOF) {
        if(input == ' ') {
            ++countBlank;
        }

        if(input == '\t') {
            ++countTab;
        }

        if(input == '\n') {
            ++countNewline;
        }
    }

    printf("Total blanks inserted = %d\n", countBlank);
    printf("Total tabs inserted = %d\n", countTab);
    printf("Total newlines inserted = %d\n", countNewline);
}