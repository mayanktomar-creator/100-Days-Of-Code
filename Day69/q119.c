// Q119: Write a program to find the repeated element in an array where only one element repeats.

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, expectedSum;

    printf("Enter n (array of numbers 1 to n-1 with one repetition): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    expectedSum = (n - 1) * (n - 2) / 2; // expected sum without repeat
    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Repeated element = %d\n", sum - expectedSum);
    return 0;
}
