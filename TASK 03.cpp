#include <stdio.h>

int main() {
    int mainChoice, subChoice;

    printf("\n===== Library Management System =====\n");
    printf("1. Manage Books\n");
    printf("2. Manage Magazines\n");
    printf("Enter choice: ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
        case 1: // Books
            printf("\n--- Books Menu ---\n");
            printf("1. Issue Book\n");
            printf("2. Return Book\n");
            printf("Enter choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("\n>> Book Issued Successfully!\n"); break;
                case 2: printf("\n>> Book Returned Successfully!\n"); break;
                default: printf("\n>> Invalid choice for Books.\n");
            }
            break;

        case 2: // Magazines
            printf("\n--- Magazines Menu ---\n");
            printf("1. Issue Magazine\n");
            printf("2. Return Magazine\n");
            printf("Enter choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("\n>> Magazine Issued Successfully!\n"); break;
                case 2: printf("\n>> Magazine Returned Successfully!\n"); break;
                default: printf("\n>> Invalid choice for Magazines.\n");
            }
            break;

        default:
            printf("\n>> Invalid main choice.\n");
    }

    printf("\n=====================================\n\n");
    return 0;
}

