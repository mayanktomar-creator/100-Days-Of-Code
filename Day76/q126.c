// Q126: Ask the user for a filename. Check if it exists and display its content if found.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("\nFile content:\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
