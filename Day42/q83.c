// Q83: Write a program to count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char s[100];
    int i = 0, vowels = 0, cons = 0;
    char ch;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                cons++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, cons);
    return 0;
}
