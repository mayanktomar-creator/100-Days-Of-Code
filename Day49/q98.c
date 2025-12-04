// Q98: Write a program to print initials with surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++)
        if (name[i] == ' ')
            lastSpace = i;

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    printf("%s", &name[lastSpace + 1]);
    return 0;
}
