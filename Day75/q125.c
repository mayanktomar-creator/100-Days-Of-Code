// Q125: Open an existing file in append mode and allow the user to add a new line of text.

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Text appended successfully!\n");
    return 0;
}
