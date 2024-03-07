#include <stdio.h>

int main() {
    int num, T[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPalindrome = 1;

    while (num > 0) {
        T[i] = num % 10;
        i++;
        num = num / 10;
    }

    for (int j = 0; j < i / 2; j++) {
        if (T[j] != T[i - j - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("nbr est un palindrome\n");
    } else {
        printf("nbr n'est pas un palindrome\n");
    }

    return 0;
}