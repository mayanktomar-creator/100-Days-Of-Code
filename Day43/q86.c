// Q86: Write a program to check if a string is palindrome.

#include <stdio.h>

int main() {
    char s[100];
    int i = 0, j, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    j = len - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("String is palindrome.\n");
    else
        printf("String is not palindrome.\n");

    return 0;
}
