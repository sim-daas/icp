#include <stdio.h>

int main() {
    int numberOfElements;
    
    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int elementsArray[numberOfElements];
    
    printf("Enter %d elements:\n", numberOfElements);
    for (int index = 0; index < numberOfElements; index++) {
        scanf("%d", &elementsArray[index]);
    }

    printf("The elements in the array are:\n");
    for (int index = 0; index < numberOfElements; index++) {
        printf("%d ", elementsArray[index]);
    }

    return 0;
}
