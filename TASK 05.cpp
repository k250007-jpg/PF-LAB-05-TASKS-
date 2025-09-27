#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // discriminant = b² - 4ac
    d = b * b - 4 * a * c;

    if (d > 0) {
        // roots are real and distinct
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else {
        if (d == 0) {
            // roots are real and equal
            root1 = -b / (2 * a);
            printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root1);
        } else {
            // roots are imaginary
            double real = -b / (2 * a);
            double imag = sqrt(-d) / (2 * a);
            printf("Roots are imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
                   real, imag, real, imag);
        }
    }

    return 0;
}

