#include <stdio.h>

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference ( pi = 3.14 )
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    
    printf("\nArea of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
