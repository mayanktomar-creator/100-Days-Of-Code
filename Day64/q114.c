// Q114: Write a program to find the length of the longest substring without repeating characters.

#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, j, len, maxLen = 0, count[256];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    len = strlen(s) - 1;

    for (i = 0; i < len; i++) {
        memset(count, 0, sizeof(count));
        for (j = i; j < len; j++) {
            if (count[(unsigned char)s[j]] == 1)
                break;
            count[(unsigned char)s[j]] = 1;
            if (j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("Length of longest substring without repeating characters = %d\n", maxLen);
    return 0;
}
