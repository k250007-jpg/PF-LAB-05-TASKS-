#include <stdio.h>
#include <math.h>

int main() {
    int shape, choice;
    double r, l, w, a, b, c, area, peri;

    printf("\n===== Geometry Calculator =====\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Choose a shape: ");
    scanf("%d", &shape);

    switch (shape) {
        case 1: // Circle
            printf("\n1. Area\n2. Perimeter\nChoose: ");
            scanf("%d", &choice);
            printf("Enter radius: ");
            scanf("%lf", &r);
            switch (choice) {
                case 1: area = M_PI * r * r;
                        printf("Area of Circle = %.2lf\n", area); break;
                case 2: peri = 2 * M_PI * r;
                        printf("Perimeter of Circle = %.2lf\n", peri); break;
                default: printf("Invalid choice.\n");
            }
            break;

        case 2: // Rectangle
            printf("\n1. Area\n2. Perimeter\nChoose: ");
            scanf("%d", &choice);
            printf("Enter length and width: ");
            scanf("%lf %lf", &l, &w);
            switch (choice) {
                case 1: area = l * w;
                        printf("Area of Rectangle = %.2lf\n", area); break;
                case 2: peri = 2 * (l + w);
                        printf("Perimeter of Rectangle = %.2lf\n", peri); break;
                default: printf("Invalid choice.\n");
            }
            break;

        case 3: // Triangle
            printf("\n1. Area\n2. Perimeter\nChoose: ");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter base and height: ");
                scanf("%lf %lf", &b, &h);
                area = 0.5 * b * h;
                printf("Area of Triangle = %.2lf\n", area);
            } else if (choice == 2) {
                printf("Enter 3 sides: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                peri = a + b + c;
                printf("Perimeter of Triangle = %.2lf\n", peri);
            } else {
                printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid shape.\n");
    }

    printf("\n================================\n");
    return 0;
}

