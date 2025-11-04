#include <stdio.h>

int main() {
    float length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    //calculations
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    //Print results
    printf("\nArea of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
