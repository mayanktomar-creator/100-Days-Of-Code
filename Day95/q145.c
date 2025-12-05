// Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopper() {
    struct Student s = {"Vikram", 104, 95.6};
    return s;
}

int main() {
    struct Student top = getTopper();
    printf("Topper: %s, Roll: %d, Marks: %.2f\n", top.name, top.roll, top.marks);
    return 0;
}
