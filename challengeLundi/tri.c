#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void selectionSort(int array[], int size) {
    int i, j, min_index;

    for (i = 0; i < size - 1; i++) {
        min_index = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        swap(&array[i], &array[min_index]);
    }
}

int main() {
    srand(time(NULL));
    int numbers[7];
    printf("Tableau initial : ");
    for (int i = 0; i < 7; i++) {
        numbers[i] = rand() % 10;
        printf("%d ", numbers[i]);
    }
    printf("\n");
    selectionSort(numbers, 7);
    printf("Tableau trie : ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
