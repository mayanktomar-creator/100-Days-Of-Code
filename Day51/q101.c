// Q101: Given a sorted array, print the index of first and last occurrence of a target element.

#include <stdio.h>

int main() {
    int arr[100], n, target, i, first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("First occurrence = %d, Last occurrence = %d\n", first, last);
    return 0;
}
