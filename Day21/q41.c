#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    int swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digits = %d\n", swapped);
    return 0;
}
