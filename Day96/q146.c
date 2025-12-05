// Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee e = {"Rohan", 201, {5, 12, 2022}};

    printf("Employee Details:\n");
    printf("Name: %s\nID: %d\nJoining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);
    return 0;
}
