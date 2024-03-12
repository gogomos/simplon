#include <stdio.h>

void ToUpperCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; 
        }
        str++;
    }
}