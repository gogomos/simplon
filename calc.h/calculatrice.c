#include "calculatrice.h"

float addition(float a, float b) {
    return a + b;
}


float soustraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
} 
