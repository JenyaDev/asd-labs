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

    if (x >= 2) {
        if (x <= 7) {
            printf("Got value y1(x)=%f with x=%f\n", firstEquation(x), x);
        } else if (x > 14) {
            printf("Got value y2(x)=%f with x=%f\n", secondEquation(x), x);
        } else {
            printf("Got value y(x)=undefined with x=%f\n", x);
        }
    } else if (x <= -3) {
        if (x > -13) {
            printf("Got value y2(x)=%f with x=%f\n", secondEquation(x), x);
        } else {
            printf("Got value y(x)=undefined with x=%f\n", x);
        }
    } else {
        printf("Got value y(x)=undefined with x=%f\n", x);
    }
    return 0;
}