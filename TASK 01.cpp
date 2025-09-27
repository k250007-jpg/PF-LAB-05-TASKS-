#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            // a is biggest, so second is max of b and c
            if (b >= c)
                printf("Second largest = %d\n", b);
            else
                printf("Second largest = %d\n", c);
        } else {
            printf("Second largest = %d\n", a);
        }
    } else {
        if (b >= c) {
            // b is biggest, so second is max of a and c
            if (a >= c)
                printf("Second largest = %d\n", a);
            else
                printf("Second largest = %d\n", c);
        } else {
            printf("Second largest = %d\n", b);
        }
    }

    return 0;
}

