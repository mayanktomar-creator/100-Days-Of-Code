// Q110: Write a program to take an integer array arr and an integer k as inputs.
// Print the maximum element in each subarray of size k.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size (k): ");
    scanf("%d", &k);

    printf("Maximum elements in each subarray: ");
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}
