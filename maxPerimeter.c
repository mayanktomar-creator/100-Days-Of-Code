#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;

    // Input three rectangles
    printf("Enter length and breadth of 1st rectangle: ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of 2nd rectangle: ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of 3rd rectangle: ");
    scanf("%d %d", &l3, &b3);

    // perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    //using ternary operator 
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("\nPerimeter of 1st Rectangle = %d", p1);
    printf("\nPerimeter of 2nd Rectangle = %d", p2);
    printf("\nPerimeter of 3rd Rectangle = %d", p3);
    printf("\nMaximum Perimeter = %d\n", max);

    return 0;
}
