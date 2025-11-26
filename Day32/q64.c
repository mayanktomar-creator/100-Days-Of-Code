/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long num;
    int freq[10] = {0};
    int rem, i, max = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while(num != 0) {
        rem = num % 10;
        freq[rem]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }

    printf("Digit %d occurs most (%d times)\n", digit, max);
    return 0;
}
