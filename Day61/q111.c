// Q111: Write a program to take an integer array arr and an integer k as inputs.
// Print the first negative integer in each subarray of size k, or 0 if none.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size (k): ");
    scanf("%d", &k);

    printf("First negatives in each subarray: ");
    for (i = 0; i <= n - k; i++) {
        found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0 ");
    }
    printf("\n");

    return 0;
}
