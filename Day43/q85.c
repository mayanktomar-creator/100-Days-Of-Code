// Q85: Write a program to reverse a string.

#include <stdio.h>

int main() {
    char s[100];
    int i, j, len = 0;
    char temp;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    i = 0;
    j = len - 1;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", s);
    return 0;
}
