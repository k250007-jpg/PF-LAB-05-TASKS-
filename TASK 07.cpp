#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    // Input username
    printf("Enter username: ");
    scanf("%s", username);

    // Check username
    if (strcmp(username, "admin") == 0) {
        // If username is correct, ask for password
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") == 0) {
            printf("\nLogin Successful\n");
        } else {
            printf("\nError: Incorrect Password\n");
        }
    } else {
        printf("\nError: Invalid Username\n");
    }

    return 0;
}

