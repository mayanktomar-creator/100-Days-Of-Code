// Q100: Write a program to print all substrings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int len, i, j, k;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = 0;
    len = strlen(s);

    printf("All substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }

    return 0;
}
