// Q124: Copy content from a source file to a destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcFile[50], destFile[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    dest = fopen(destFile, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);
    return 0;
}
