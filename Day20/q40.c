#include <stdio.h>

int main() {
    long binary, ones = 0, place = 1;
    int rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary != 0) {
        rem = binary % 10;
        rem = (rem == 0) ? 1 : 0;
        ones += rem * place;
        binary /= 10;
        place *= 10;
    }

    printf("1's complement = %ld\n", ones);
    return 0;
}
