#include <stdio.h>

int main() {
    int input;

    while((input = getchar()) != EOF) {
        if(input == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }

        if(input == '\b') {
            putchar('\\');
            putchar('b');
            continue;            
        }

        if(input == '\\') {
            putchar('\\');
            putchar('\\');
            continue;            
        }

        putchar(input);
    }
}