// Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter name, roll, and marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
