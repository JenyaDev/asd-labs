#include "stdio.h"
#include "math.h"

// Variant #26 - Without logical operators

float firstEquation(float x) {
    return powf(x, 3) + 14;
}

float secondEquation(float x) {
    return -4*powf(x, 4) + 3*x - 7;
}

int main() {
    float x;
    printf("Input number> ");
    scanf("%f", &x);

    if (x >= 2) {
        if (x <= 7) {
            printf("Got value y1(x)=%f with x=%f", firstEquation(x), x);
            return 0;
        } else if (x > 14) {
            printf("Got value y2(x)=%f with x=%f", secondEquation(x), x);
            return 0;
        }
    } else if (x <= -3) {
        if (x > -13) {
            printf("Got value y2(x)=%f with x=%f", secondEquation(x), x);
            return 0;
        }
    }

    printf("Got no value with x=%f", x);
    return 0;
}
