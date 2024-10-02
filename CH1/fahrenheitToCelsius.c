#include <stdio.h>

int FTC() {

    float f, c;

    printf("\nEnter temperature in fahrenheit : ");
    scanf_s("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("\nTemperature in celsius : %f", c);

    return 0;
}