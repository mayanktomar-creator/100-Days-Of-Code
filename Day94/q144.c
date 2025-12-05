// Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1 = {"Anita", 101, 92.5};
    display(s1);
    return 0;
}
