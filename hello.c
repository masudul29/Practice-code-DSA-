
#include <stdio.h>

int main() {
    int number;

    printf("Ekta purno songkha (integer) likho: ");
    // User theke input neya
    scanf("%d", &number);

    // % (Modulus) operator diye vagshesh (remainder) check kora hoy
    if (number % 2 == 0) {
        printf("%d holo ekta JOR (Even) songkha.\n", number);
    } else {
        printf("%d holo ekta BIJOR (Odd) songkha.\n", number);
    }

    return 0;
}