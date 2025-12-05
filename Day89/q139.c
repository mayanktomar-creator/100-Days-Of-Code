// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum status {OK=1, ERROR=5, UNKNOWN=10};

int main() {
    enum status s1 = OK, s2 = ERROR, s3 = UNKNOWN;
    printf("Enum values: OK=%d, ERROR=%d, UNKNOWN=%d\n", s1, s2, s3);
    return 0;
}
