#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
