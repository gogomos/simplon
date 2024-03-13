#include <stdio.h>
#include "calculatrice.c"

int main() {

    float a = 10.0, b = 5.0;

    printf("Addition : %.2f\n", addition(a, b));
    printf("Soustraction : %.2f\n", soustraction(a, b));
    printf("Multiplication : %.2f\n", multiplication(a, b));
    printf("Division : %.2f\n", division(a, b));

    return 0;
}
