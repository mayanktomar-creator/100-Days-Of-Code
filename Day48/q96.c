// Q96: Write a program to reverse each word in a sentence without changing the word order.

#include <stdio.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[200];
    char *wordStart = NULL, *ptr = s;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (*ptr) {
        if ((wordStart == NULL) && (*ptr != ' ' && *ptr != '\n'))
            wordStart = ptr;

        if ((wordStart != NULL) && (*(ptr + 1) == ' ' || *(ptr + 1) == '\0' || *(ptr + 1) == '\n')) {
            reverse(wordStart, ptr);
            wordStart = NULL;
        }
        ptr++;
    }

    printf("Sentence after reversing words: %s\n", s);
    return 0;
}
