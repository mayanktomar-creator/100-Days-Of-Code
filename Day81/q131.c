// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum days d;
    printf("Days of the week with integer values:\n");
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d -> ", d);
        switch(d) {
            case SUNDAY: printf("Sunday\n"); break;
            case MONDAY: printf("Monday\n"); break;
            case TUESDAY: printf("Tuesday\n"); break;
            case WEDNESDAY: printf("Wednesday\n"); break;
            case THURSDAY: printf("Thursday\n"); break;
            case FRIDAY: printf("Friday\n"); break;
            case SATURDAY: printf("Saturday\n"); break;
        }
    }
    return 0;
}
