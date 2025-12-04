// Q106: Find next greater element for each element in array using nested loops.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, next;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next greater elements:\n");
    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
