/*
Q63 (Arrays (1D))
Merge two arrays.
*/

#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[k++] = a[i];
    for(j = 0; j < n2; j++)
        c[k++] = b[j];

    printf("Merged array:\n");
    for(i = 0; i < k; i++){
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
