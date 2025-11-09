#include <stdio.h>

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int sum=0, rev;

    while(num != 0){
        rev = num%10;
        sum += rev;
        num = num/10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}