// Q89: Write a program to count the frequency of a given character in a string.

#include <stdio.h>

int main() {
    char s[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ch)
            count++;
        i++;
    }

    printf("Character '%c' occurs %d times.\n", ch, count);
    return 0;
}
