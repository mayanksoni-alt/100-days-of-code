#include <stdio.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;

void displayMessage(UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator. You have full access.\n");
            break;
        case USER:
            printf("Welcome, User. You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest. You have limited access.\n");
            break;
        default:
            printf("Unknown user role.\n");
            break;
    }
}

int main() {
    UserRole role1 = ADMIN;
    UserRole role2 = USER;
    UserRole role3 = GUEST;

    displayMessage(role1);
    displayMessage(role2);
    displayMessage(role3);

    return 0;
}
