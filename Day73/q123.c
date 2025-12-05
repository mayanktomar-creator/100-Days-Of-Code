// Q123: Read a text file and count total characters, words, and lines.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
