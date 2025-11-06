#include <stdio.h>

int main() {
    int num, binary = 0, rem, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary representation = %d\n", binary);
    return 0;
}
