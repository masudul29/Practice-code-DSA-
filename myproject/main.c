
#include <stdio.h>
#include <stdlib.h>
#include "converter.h"

void displayMenu() {
    printf("\n=== BDT to English Text Converter ===\n");
    printf("1. Convert using digits only\n");
    printf("2. Convert using words\n");
    printf("3. Exit\n");
    printf("Choose option (1–3): ");
}

int main() {
    int choice;

    while (1) {
        displayMenu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Enter numbers only.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            long long amount;
            printf("\nEnter BDT amount: ");
            scanf("%lld", &amount);

            if (validateAmount(amount))
                convertBDTToText(amount);
        }
        else if (choice == 2) {
            long long amount;
            printf("\nEnter BDT amount: ");
            scanf("%lld", &amount);

            if (validateAmount(amount))
                convertBDTToWords(amount);
        }
        else if (choice == 3) {
            printf("Thank you for using the converter!\n");
            return 0;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
