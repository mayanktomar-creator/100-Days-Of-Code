#include <stdio.h>
int main(){
    int a[10][10],n,i,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        sum += a[i][i];

    printf("Sum = %d\n",sum);
    return 0;
}
