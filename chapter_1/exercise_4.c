#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    while(celsius <= upper) {
        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}