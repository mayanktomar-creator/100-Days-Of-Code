// Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, top = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("\nTop Student:\nName: %s\nRoll: %d\nMarks: %.2f\n",
           s[top].name, s[top].roll, s[top].marks);

    return 0;
}
