#include <stdio.h>

int main() {
    int dept, course;

    printf("Select Department:\n");
    printf("1. CS\n2. EE\n3. BBA\n");
    scanf("%d", &dept);

    switch (dept) {
        case 1: // CS
            printf("\nCS Courses:\n1. Data Structures\n2. Operating Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("\nYou selected: Data Structures\n"); break;
                case 2: printf("\nYou selected: Operating Systems\n"); break;
                default: printf("\nInvalid course!\n");
            }
            break;

        case 2: // EE
            printf("\nEE Courses:\n1. Circuit Analysis\n2. Signals & Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("\nYou selected: Circuit Analysis\n"); break;
                case 2: printf("\nYou selected: Signals & Systems\n"); break;
                default: printf("\nInvalid course!\n");
            }
            break;

        case 3: // BBA
            printf("\nBBA Courses:\n1. Marketing\n2. Finance\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("\nYou selected: Marketing\n"); break;
                case 2: printf("\nYou selected: Finance\n"); break;
                default: printf("\nInvalid course!\n");
            }
            break;

        default:
            printf("\nInvalid department!\n");
    }

    return 0;
}

