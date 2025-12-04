// Q107: Find previous greater element for each element in array using nested loops.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, prev;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous greater elements:\n");
    for (i = 0; i < n; i++) {
        prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d ", prev);
    }
    printf("\n");
    return 0;
}
