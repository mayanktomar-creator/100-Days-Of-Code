// Q129: A file numbers.txt contains integers. Read all and compute sum and average.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
        printf("No numbers found!\n");
    else
        printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);

    return 0;
}
