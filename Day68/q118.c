// Q118: Write a program to find the missing number in array from 0 to n.

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, expectedSum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements (from 0 to n missing one): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    expectedSum = n * (n + 1) / 2;
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Missing number = %d\n", expectedSum - sum);
    return 0;
}
