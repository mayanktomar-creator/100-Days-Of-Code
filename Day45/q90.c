// Q90: Write a program to toggle the case of each character in a string.

#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }

    printf("Toggled case string: %s\n", s);
    return 0;
}
