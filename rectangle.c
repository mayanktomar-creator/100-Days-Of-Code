#include <stdio.h>

int main(){
    int length;
    printf("Enter length : ");
    scanf("%d", &length);

    int breadth;
    printf("Enter breadth : ");
    scanf("%d", &breadth);

    int Area = length*breadth;     //Area Of Rectangle
    int Perimeter = 2*(length+breadth);       //Perimeter of Rectangle

    printf("Area of rectangle is %d\nPerimeter of rectangle is %d\n", Area, Perimeter);
    return 0;
}