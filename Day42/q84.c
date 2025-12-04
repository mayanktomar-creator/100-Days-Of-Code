// Q84: Write a program to convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }

    printf("Uppercase string: %s\n", s);
    return 0;
}
