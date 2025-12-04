// Q87: Write a program to count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char s[100];
    int spaces = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ' ')
            spaces++;
        else if (s[i] >= '0' && s[i] <= '9')
            digits++;
        else if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
            special++;
        i++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial Characters = %d\n", spaces, digits, special);
    return 0;
}
