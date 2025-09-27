#include <stdio.h>
#include <math.h>

int main() {
    float loan, rate, time, emi, si, ci, total;
    int type;

    // Input loan details
    printf("Enter loan amount: ");
    scanf("%f", &loan);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter interest type (1 = Simple, 2 = Compound): ");
    scanf("%d", &type);

    // Nested decision
    if (type == 1) {
        // Simple Interest
        si = (loan * rate * time) / 100;
        total = loan + si;
        emi = total / (time * 12);
        printf("\nSimple Interest EMI = %.2f\n", emi);
    } else {
        if (type == 2) {
            // Compound Interest
            ci = loan * pow((1 + rate / 100), time) - loan;
            total = loan + ci;
            emi = total / (time * 12);
            printf("\nCompound Interest EMI = %.2f\n", emi);
        } else {
            printf("\nInvalid interest type entered!\n");
        }
    }

    return 0;
}

