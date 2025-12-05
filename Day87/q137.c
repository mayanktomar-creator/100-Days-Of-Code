// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role {ADMIN, USER, GUEST};

int main() {
    enum role r = USER;

    switch(r) {
        case ADMIN: printf("Welcome Admin! Full Access Granted.\n"); break;
        case USER: printf("Welcome User! Limited Access.\n"); break;
        case GUEST: printf("Welcome Guest! View Only Access.\n"); break;
    }

    return 0;
}
