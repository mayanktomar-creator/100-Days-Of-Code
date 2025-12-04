// Q91: Write a program to remove all vowels from a string.

#include <stdio.h>

int main() {
    char s[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
              ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            result[j++] = s[i];
        }
        i++;
    }

    result[j] = '\0';
    printf("String after removing vowels: %s\n", result);
    return 0;
}
