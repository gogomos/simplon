#include <stdio.h>
int strlen(char *str) {
    int i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
}
