#include <stdio.h>
int main(){
    int a[10][10],n,i;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Diagonal elements: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i][i]);

    printf("\n");    
    return 0;
}
