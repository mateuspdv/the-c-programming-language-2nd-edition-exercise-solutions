#include <stdio.h>

int main() {
    int input, lastInput;

    while((input = getchar()) != EOF) {
        if(input != ' ' || lastInput != ' ') {
            putchar(input);
        }
        lastInput = input;
    }
}