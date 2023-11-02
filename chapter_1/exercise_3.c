#include <stdio.h>

int main() {
    printf("### Fahrenheit to Celsius Conversion ###\n");
    printf("\n----------------------------------------\n\n");

    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    while(fahrenheit <= upper) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}