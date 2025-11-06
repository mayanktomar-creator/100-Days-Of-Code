#include <stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int factorial = 1;

    if (n < 0){
        printf("Factoral Doesn't Exist\n");
    }
    else{
        for(int i = n; i>=1; i--){
            factorial *= i;
        }
        printf("Factorial of %d : %d\n", n, factorial);
    }

    return 0;
}