// Q120: Write a program to take a string input and change it to sentence case.

#include <stdio.h>

int main() {
    char s[200];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    // Convert first letter to uppercase
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?') {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] = s[i + 1] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    printf("Sentence case: %s\n", s);
    return 0;
}
