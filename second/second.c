#include "stdio.h"
#include "math.h"

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    double sumMult = 1;
    double sumAdd = 0;
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        sumAdd += sin(i) + 1;
        sumMult *= sumAdd/(i*(i+1));
        counter += 7;
    }

    printf("Result: %f\n", sumMult);
    printf("Number of operations: %d", counter);

    return 0;
}