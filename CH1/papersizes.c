#include <stdio.h>

int main() {

    int horiz = 1189, vert = 841, temphoriz;

    for (int i = 0; i <= 8; i++) {

        printf("A%d - %d x %d\n", i, horiz, vert);
        temphoriz = vert;
        vert = horiz / 2;
        horiz = temphoriz;

    }

    return 0;
}