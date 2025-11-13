#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++)  // print spaces before numbers
            printf(" ");
        for (int j = i; j <= 5; j++) // print numbers from i to 5
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
