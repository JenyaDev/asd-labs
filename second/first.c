#include "stdio.h"
#include "math.h"

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    double sumMult = 1;
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        double sumAdd = 0;
        for (int j = 1; j <= i; j++) {
            sumAdd += sin(j) + 1;
            counter += 3;
        }
        sumMult *= sumAdd/(i*(i+1));
        counter += 4;
    }

    printf("Result: %f\n", sumMult);
    printf("Number of operations: %d", counter);

    return 0;
}