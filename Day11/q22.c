#include <stdio.h>

int main() {
    float cost, sell, percent;
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter selling price: ");
    scanf("%f", &sell);

    if(sell > cost) {
        percent = ((sell - cost) / cost) * 100;
        printf("Profit: %.2f%%\n", percent);
    } else if(cost > sell) {
        percent = ((cost - sell) / cost) * 100;
        printf("Loss: %.2f%%\n", percent);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
