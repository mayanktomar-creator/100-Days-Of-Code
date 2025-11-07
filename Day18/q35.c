#include <stdio.h>

int main(){
    int num;
    printf("Enter number :");
    scanf("%d", &num);

    printf("##################\n");
    printf("FACTOR   OF  %d \n", num);
    printf("##################\n");

    for(int i = 1; i<=num; i++){
        if (num%i==0){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}