#include <stdio.h>

int main() {

    float f, c;

    printf("\nEnter temperature in fahrenheit : ");
    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("\nTemperature in celsius : %f", c);

    return 0;
}