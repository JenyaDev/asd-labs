#include "stdio.h"
#include "math.h"

// Variant #26 - With logical operators

float firstEquation(float x) {
    return powf(x, 3) + 14;
}

float secondEquation(float x) {
    return -4*powf(x, 3) + 3*x - 7;
}

int main() {
    float x;
    printf("Input number> ");
    scanf("%f", &x);

    if (x >= 2 && x <= 7) {
        printf("Got value y1(x)=%f with x=%f", firstEquation(x), x);
        return 0;
    } else if (x > -13 && x <= -3 || x > 14) {
        printf("Got value y2(x)=%f with x=%f", secondEquation(x), x);
        return 0;
    }
    
    printf("Got no value with x=%f", x);
    return 0;
}