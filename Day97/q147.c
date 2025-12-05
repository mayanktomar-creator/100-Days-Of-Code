// Q147: Store employee data in binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e = {"Rajesh", 101, 45000.5};
    FILE *fp;

    fp = fopen("empdata.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Employee data written successfully!\n");

    struct Employee readE;
    fp = fopen("empdata.bin", "rb");
    fread(&readE, sizeof(readE), 1, fp);
    fclose(fp);

    printf("\nEmployee Details from File:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", readE.name, readE.id, readE.salary);

    return 0;
}
