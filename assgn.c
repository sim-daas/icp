
#include <stdio.h>

int calculatePowerUsingRecursion(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * calculatePowerUsingRecursion(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d raised to the power %d is %d\n", base, exponent, calculatePowerUsingRecursion(base, exponent));
    return 0;
}
