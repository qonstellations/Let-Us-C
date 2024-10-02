#include <stdio.h>

int shapes() {

    float l, b, r, a1, a2;

    printf("\nEnter length, breadth, radius (eg - 6, 8, 4) : ");
    scanf_s("%f,%f,%f", &l, &b, &r);

    a1 = l * b;
    a2 = (float) 3.14 * r * r;

    printf("\nArea of Rectangle : %f\nArea of Circle : %f", a1, a2);

    return 0;
}