// Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter first student's name, roll, marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);
    printf("Enter second student's name, roll, marks: ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    if (strcmp(s1.name, s2.name)==0 && s1.roll==s2.roll && s1.marks==s2.marks)
        printf("Both students are identical.\n");
    else
        printf("Students are different.\n");

    return 0;
}
