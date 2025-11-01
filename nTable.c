#include <stdio.h>


int main(){
    int n;
    printf("Enter a number : ");     
    scanf("%d", &n);             //taking input 

    printf("#######################\n");
    printf("\tTABLE OF %d\n", n);
    printf("#######################\n");

    for (int i = 1; i <= 10; i++){

        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}
