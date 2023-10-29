#include <stdio.h>

/* The compiler displays a warning message:
   exercise_2.c: In function 'main':
   exercise_2.c:4:12: warning: unknown escape sequence: '\c'
   The program runs, displaying the message: cHelloc,cWorldc */

int main() {
    printf("\cHello\c,\cWorld\c");
}