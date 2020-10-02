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

    char interval[3];
    char answer[] = "undefined";

    if (x >= 2) {
        if (x <= 7) {
            sprintf(answer, "%f", firstEquation(x));
            sprintf(interval, "%s", "y1");
        } else if (x > 14) {
            sprintf(answer, "%f", secondEquation(x));
            sprintf(interval, "%s", "y2");
        }
    } else if (x <= -3) {
        if (x > -13) {
            sprintf(answer, "%f", secondEquation(x));
            sprintf(interval, "%s", "y2");
        }
    }

    printf("Got value %s(x)=%s with x=%f\n", interval, answer, x);
    return 0;
}
