// Q108: For each element, print product of all other elements in the array.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, prod;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Product array:\n");
    for (i = 0; i < n; i++) {
        prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                prod *= arr[j];
        }
        printf("%d ", prod);
    }
    printf("\n");
    return 0;
}
