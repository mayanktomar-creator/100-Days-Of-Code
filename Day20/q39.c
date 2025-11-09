#include <stdio.h>

int main() {
    int num, rem;
    int product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        if (rem % 2 != 0) {
            product *= rem;
            found = 1;
        }
        num /= 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
