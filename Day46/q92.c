// Q92: Write a program to find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char s[200];
    int freq[26] = {0};
    int i = 0, found = 0;

    printf("Enter a lowercase string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
            if (freq[s[i] - 'a'] == 2) {
                printf("First repeating character: %c\n", s[i]);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("No repeating character found.\n");

    return 0;
}
