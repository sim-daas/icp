
#include <stdio.h>

int main() {
    int numberOfElements, newValue, position = 0;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &numberOfElements);

    int sortedArray[numberOfElements + 1];

    printf("Enter %d elements in ascending order:\n", numberOfElements);
    for (int i = 0; i < numberOfElements; i++) {
        scanf("%d", &sortedArray[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    while (position < numberOfElements && sortedArray[position] < newValue) {
        position++;
    }

    for (int i = numberOfElements; i > position; i--) {
        sortedArray[i] = sortedArray[i - 1];
    }

    sortedArray[position] = newValue;

    printf("Array after insertion:\n");
    for (int i = 0; i <= numberOfElements; i++) {
        printf("%d ", sortedArray[i]);
    }

    return 0;
}
