// Q127: Read text from input.txt, convert lowercase to uppercase, and write to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file(s)!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    printf("File converted to uppercase successfully!\n");

    fclose(in);
    fclose(out);
    return 0;
}
