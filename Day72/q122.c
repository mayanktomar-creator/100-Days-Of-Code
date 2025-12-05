// Q122: Open an existing file (info.txt) and read its contents using fgets().

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
