// Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum colors {RED, GREEN, BLUE, YELLOW, WHITE};

int main() {
    enum colors c;
    for (c = RED; c <= WHITE; c++) {
        printf("Color %d\n", c);
    }
    return 0;
}
