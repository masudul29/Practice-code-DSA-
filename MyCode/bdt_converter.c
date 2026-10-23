#include <stdio.h>

void convertBDTToText(long long amount) {
    if (amount == 0) {
        printf("0 taka only\n");
        return;
    }

    if (amount > 99999999999LL) {
        printf("Error: Amount exceeds maximum limit of 99999999999\n");
        return;
    }

    long long crore = amount / 10000000;
    amount %= 10000000;

    int lac = amount / 100000;
    amount %= 100000;

    int thousand = amount / 1000;
    amount %= 1000;

    int hundred = amount / 100;
    amount %= 100;

    int taka = amount;
    int first = 1;

    if (crore > 0) {
        printf("%lld crore", crore);
        first = 0;
    }

    if (lac > 0) {
        if (!first) printf(" ");
        printf("%d lac", lac);
        first = 0;
    }

    if (thousand > 0) {
        if (!first) printf(" ");
        printf("%d thousand", thousand);
        first = 0;
    }

    if (hundred > 0) {
        if (!first) printf(" ");
        printf("%d hundred", hundred);
        first = 0;
    }

    if (taka > 0) {
        if (!first) printf(" ");
        printf("%d", taka);
    }

    printf(" taka only\n");
}

int main() {
    long long amount;
    int count = 1;
    char choice[10];

    do {
        printf("Example %d:\n", count);
        printf("Enter BDT amount: ");
        scanf("%lld", &amount);

        if (amount < 0) {
            printf("Error: Please enter a positive amount\n\n");
            continue;
        }

        printf("Amount in words: ");
        convertBDTToText(amount);

        printf("\nDo you want to continue? (Yes/No): ");
        scanf("%s", choice);
        printf("\n");

        if (choice[0] == 'Y' || choice[0] == 'y') {
            count++;
        }

    } while (choice[0] == 'Y' || choice[0] == 'y');

    return 0;
}
