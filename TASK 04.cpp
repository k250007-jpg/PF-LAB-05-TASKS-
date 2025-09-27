#include <stdio.h>

int main() {
    int category, item;

    printf("\n===== Online Food Ordering System =====\n");
    printf("1. Fast Food\n");
    printf("2. Drinks\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category) {
        case 1: // Fast Food
            printf("\n--- Fast Food Menu ---\n");
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch (item) {
                case 1: printf("\n>> You ordered a Burger!\n"); break;
                case 2: printf("\n>> You ordered a Pizza!\n"); break;
                default: printf("\n>> Invalid Fast Food choice.\n");
            }
            break;

        case 2: // Drinks
            printf("\n--- Drinks Menu ---\n");
            printf("1. Coke\n");
            printf("2. Juice\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch (item) {
                case 1: printf("\n>> You ordered a Coke!\n"); break;
                case 2: printf("\n>> You ordered a Juice!\n"); break;
                default: printf("\n>> Invalid Drink choice.\n");
            }
            break;

        default:
            printf("\n>> Invalid category.\n");
    }

    printf("\n=======================================\n\n");
    return 0;
}

