// Q94: Write a program to find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char s[200], word[50], longest[50] = "";
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (1) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
            if (s[i] == '\0' || s[i] == '\n')
                break;
        } else {
            word[j++] = s[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
