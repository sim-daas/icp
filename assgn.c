
#include <stdio.h>

int countDigitsUsingRecursion(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + countDigitsUsingRecursion(number / 10);
}

int main() {
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    printf("The number of digits in %d is %d\n", inputNumber, countDigitsUsingRecursion(inputNumber));
    return 0;
}
