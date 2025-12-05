// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum operation {ADD=1, SUBTRACT, MULTIPLY};

int main() {
    int a, b, choice;
    enum operation op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add\n2.Subtract\n3.Multiply\nEnter your choice: ");
    scanf("%d", &choice);
    op = choice;

    switch (op) {
        case ADD: printf("Sum = %d\n", a + b); break;
        case SUBTRACT: printf("Difference = %d\n", a - b); break;
        case MULTIPLY: printf("Product = %d\n", a * b); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
