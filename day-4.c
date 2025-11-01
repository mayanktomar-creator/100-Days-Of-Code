#include <stdio.h>
#include <string.h>

int main(){

    char Name[30];
    int roll;
    int eng, hindi, maths;
    char Grade;

    printf("ENTER STUDENT NAME :");
    printf("ENTER ROLL NO :");
    printf("ENTER MARKS OF ENGLISH :");
    printf("ENTER MARKS OF HINDI : ");
    printf("ENTER MARKS OF MATHS :");

    scanf("%s %d %d %d %d", &Name, &roll, &eng, &hindi, &maths);

    float totalM = eng + hindi + maths;
    float overallP = TotalM/300;

    printf("STUDENT REPORT CARD\n");
    printf("TOTAL MARKS = %d", totalM);
    printf("OVERALL PERCENTAGE = %f", overallP);
    return 0;
}