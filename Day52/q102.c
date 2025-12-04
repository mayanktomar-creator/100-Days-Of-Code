// Q102: Find index of smallest element greater than or equal to x in a sorted array.

#include <stdio.h>

int main() {
    int arr[100], n, x, i, ceilIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Ceil index = %d\n", ceilIndex);
    return 0;
}
