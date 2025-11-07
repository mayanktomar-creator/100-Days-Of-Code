#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    printf("HCF (GCD) of %d and %d = %d\n", x, y, hcf);

    return 0;
}
