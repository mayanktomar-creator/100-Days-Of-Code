// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go'.

#include <stdio.h>

enum traffic {RED, YELLOW, GREEN};

int main() {
    enum traffic signal = YELLOW;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}
