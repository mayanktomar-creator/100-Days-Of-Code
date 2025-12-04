// Q93: Write a program to check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};
    int i = 0, isAnagram = 1;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0' && s1[i] != '\n') {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            freq[s1[i] - 'a']++;
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
            freq[s1[i] - 'A']++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            freq[s2[i] - 'a']--;
        else if (s2[i] >= 'A' && s2[i] <= 'Z')
            freq[s2[i] - 'A']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
