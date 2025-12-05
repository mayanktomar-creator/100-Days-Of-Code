// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT and print messages accordingly.

#include <stdio.h>

enum status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum status s = SUCCESS;

    if (s == SUCCESS)
        printf("Operation Successful!\n");
    else if (s == FAILURE)
        printf("Operation Failed!\n");
    else
        printf("Operation Timed Out!\n");

    return 0;
}
