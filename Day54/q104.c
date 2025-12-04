// Q104: Find integer x such that sum(1..x) = sum(x..n)

#include <stdio.h>

int main() {
    int n, x, sumLeft, sumRight;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        sumLeft = x * (x + 1) / 2;
        sumRight = (n * (n + 1) / 2) - ((x - 1) * x / 2);
        if (sumLeft == sumRight) {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
