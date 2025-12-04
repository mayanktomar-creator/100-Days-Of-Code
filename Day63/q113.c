// Q113: Write a program to find the kth smallest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // sort array using simple bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%dth smallest element = %d\n", k, arr[k - 1]);
    return 0;
}
