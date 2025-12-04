// Q109: Write a program to take an integer array arr and an integer k as inputs.
// Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, maxSum, currentSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    maxSum = -99999;  // initialize with a small number

    for (i = 0; i <= n - k; i++) {
        currentSum = 0;
        for (j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);
    return 0;
}
