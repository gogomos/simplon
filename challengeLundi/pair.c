#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numbers[10];
    printf("Tableau initial : ");
    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int nbImpairs = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 != 0) { 
            numbers[nbImpairs] = numbers[i]; 
            nbImpairs++; 
        }
    }
    printf("Nombres impairs : ");
    for (int i = 0; i < nbImpairs; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
