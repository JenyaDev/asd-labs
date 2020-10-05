#include "stdio.h"

// Variant #26 - Without logical operators

float firstEquation(float x) {
    return x*x*x + 14;
}

float secondEquation(float x) {
    return -4*x*x*x*x + 3*x - 7;
}

int main() {
    float x;
    printf("Input number> ");
    scanf("%f", &x);

    const char *interval;
    char answer[] = "undefined";

    if (x >= 2) {
        if (x <= 7) {
            sprintf(answer, "%f", firstEquation(x));
            interval = "y1";
        } else if (x > 14) {
            sprintf(answer, "%f", secondEquation(x));
            interval = "y2";
        }
    } else if (x <= -3) {
        if (x > -13) {
            sprintf(answer, "%f", secondEquation(x));
            interval = "y2";
        }
    }

    printf("Got value %s(x)=%s with x=%f\n", interval, answer, x);
    return 0;
}
