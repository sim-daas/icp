#include <stdio.h>

void sortDescending(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int firstArray[size], secondArray[size], mergedArray[2 * size];

    printf("Enter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &firstArray[i]);
    }

    printf("Enter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &secondArray[i]);
    }

    for (int i = 0; i < size; i++) {
        mergedArray[i] = firstArray[i];
        mergedArray[size + i] = secondArray[i];
    }

    sortDescending(mergedArray, 2 * size);

    printf("Merged array in descending order:\n");
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
