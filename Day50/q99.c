// Q99: Write a program to change date format from dd/mm/yyyy to dd-Mon-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[15], dd[3], mm[3], yyyy[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    strncpy(dd, date, 2);
    dd[2] = '\0';
    strncpy(mm, date + 3, 2);
    mm[2] = '\0';
    strcpy(yyyy, date + 6);

    int monthNum = atoi(mm);
    printf("Formatted Date: %s-%s-%s\n", dd, months[monthNum - 1], yyyy);
    return 0;
}
