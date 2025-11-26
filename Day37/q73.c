#include <stdio.h>
int main(){
    int a[10][10],r,c,i,j,rowSum;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        rowSum = 0;
        for(j=0;j<c;j++){
            rowSum += a[i][j];
        }
        printf("Row %d sum = %d\n",i+1,rowSum);
    }
    return 0;
}
