// Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;           // normal structure variable
    struct Student *ptr;         // pointer to structure

    ptr = &s1;                   // assigning address of structure to pointer

    // Taking input using pointer
    printf("Enter name: ");
    scanf("%s", ptr->name);      // same as s1.name

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);     // same as s1.roll

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);    // same as s1.marks

    // Displaying data using pointer
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    // Modifying data using pointer
    ptr->marks += 5;  // adding 5 bonus marks
    printf("\nAfter adding 5 bonus marks:\n");
    printf("Updated Marks: %.2f\n", ptr->marks);

    return 0;
}
