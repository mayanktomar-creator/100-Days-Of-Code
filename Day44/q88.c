// Q88: Write a program to replace all spaces in a string with hyphens.

#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ' ')
            s[i] = '-';
        i++;
    }

    printf("Modified string: %s\n", s);
    return 0;
}
