// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
// Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nRecords saved to file successfully!\n");

    // Reading back from file
    fp = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
