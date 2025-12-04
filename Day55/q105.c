// Q105: Find majority element (appears more than n/2 times).

#include <stdio.h>

int main() {
    int arr[100], n, i, j, count, majority = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    printf("Majority element = %d\n", majority);
    return 0;
}
