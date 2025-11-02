#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter the sides of triangle :");
    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){
        printf("Yes, it is valid triangle\n");
        if (a==b && a==c && b==c){
            printf("Type : Equilateral Triangle\n");           
        }
        else if(a==b || a==c || b==c){
            printf("Type : Isosceles Triangle\n");
        }
        else{
            printf("Type : Scalene Triangle\n");
        }
    }
    else{
        printf("Invalid Sides,Triangle not possible\n");
    }
    return 0;
}
