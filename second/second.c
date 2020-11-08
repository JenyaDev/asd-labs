#include "stdio.h"
#include "math.h"

int main() {
    int n;
    int counter = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    
    if (n > 0) {
        double sumMult = 1;
        for (int i = 1; i <= n; i++) {
            double sumAdd = 0;
            sumAdd += sin(i) + 1;
            sumMult *= sumAdd/i*(i+1);
            counter += 7; // Sine, division, two additions and multiplication
        }

        printf("Result: %f\n", sumMult);
        printf("Number of operations: %d\n", counter);
    }

    return 0;
}