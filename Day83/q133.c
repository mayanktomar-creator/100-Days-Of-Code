// Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>

enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum months m;

    for (m = JAN; m <= DEC; m++) {
        printf("Month %d: ", m);
        if (m == FEB)
            printf("28 or 29 days\n");
        else if (m==APR || m==JUN || m==SEP || m==NOV)
            printf("30 days\n");
        else
            printf("31 days\n");
    }

    return 0;
}
