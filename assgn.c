
#include <stdio.h>

int calculateFactorialUsingRecursion(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * calculateFactorialUsingRecursion(number - 1);
}

int main() {
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    printf("Factorial of %d is %d\n", inputNumber, calculateFactorialUsingRecursion(inputNumber));
    return 0;
}
