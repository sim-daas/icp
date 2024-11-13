#include <stdio.h>

int main() {
    int numberOfElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int sourceArray[numberOfElements], destinationArray[numberOfElements];

    printf("Enter %d elements for the source array:\n", numberOfElements);
    for (int index = 0; index < numberOfElements; index++) {
        scanf("%d", &sourceArray[index]);
        destinationArray[index] = sourceArray[index];
    }

    printf("Elements in the destination array are:\n");
    for (int index = 0; index < numberOfElements; index++) {
        printf("%d ", destinationArray[index]);
    }

    return 0;
}
