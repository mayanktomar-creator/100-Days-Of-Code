// Q112: Write a program to find the maximum sum of a contiguous subarray using Kadane’s algorithm.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int maxSum, currentSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    maxSum = currentSum = arr[0];

    for (i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);
    return 0;
}
