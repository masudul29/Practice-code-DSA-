#include <stdio.h>
#include <string.h>
#include "converter.h"

// Array of unit definitions
static const UnitDefinition units[] = {
    {10000000, " crore"},
    {100000,  " lac"},
    {1000,     " thousand"},
    {100,      " hundred"},
    {1,        ""}   // base unit
};

// Arrays for number to word conversion
static const char *ones[] = {
    "", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"
};

static const char *teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

static const char *tens[] = {
    "", "", "twenty", "thirty", "forty", "fifty",
    "sixty", "seventy", "eighty", "ninety"
};

// Convert using digits only
void convertBDTToText(long long amount) {
    if (amount == 0) {
        printf("Zero taka only\n");
        return;
    }

    long long remaining = amount;
    int first_unit = 1;

    for (int i = 0; i < NUM_UNITS; i++) {
        long long unit_value = remaining / units[i].value;
        remaining %= units[i].value;

        if (unit_value > 0) {
            if (!first_unit) printf(" ");
            printf("%lld%s", unit_value, units[i].label);
            first_unit = 0;
        }
    }

    printf(" taka only\n");
}

// Convert numbers 0-999 to words
void convertNumberToText(int number, char *buffer) {
    buffer[0] = '\0';

    if (number >= 100) {
        int h = number / 100;
        sprintf(buffer + strlen(buffer), "%s hundred", ones[h]);
        number %= 100;
        if (number > 0) strcat(buffer, " ");
    }

    if (number >= 20) {
        int t = number / 10;
        sprintf(buffer + strlen(buffer), "%s", tens[t]);
        number %= 10;
        if (number > 0) {
            strcat(buffer, "-");
            strcat(buffer, ones[number]);
        }
    }
    else if (number >= 10) {
        strcat(buffer, teens[number - 10]);
    }
    else if (number > 0) {
        strcat(buffer, ones[number]);
    }
}

// Convert full BDT number into words
void convertBDTToWords(long long amount) {
    if (amount == 0) {
        printf("Zero taka only\n");
        return;
    }

    long long remaining = amount;
    char output[1000] = "";
    int first_unit = 1;

    for (int i = 0; i < NUM_UNITS; i++) {
        long long unit_value = remaining / units[i].value;
        remaining %= units[i].value;

        if (unit_value > 0) {
            if (!first_unit) strcat(output, " ");

            char words[100] = "";
            convertNumberToText((int)unit_value, words);

            strcat(output, words);
            strcat(output, units[i].label);
            first_unit = 0;
        }
    }

    printf("%s taka only\n", output);
}

int validateAmount(long long amount) {
    if (amount < MIN_AMOUNT) {
        printf("Error: Amount cannot be negative!\n");
        return 0;
    }
    if (amount > MAX_AMOUNT) {
        printf("Error: Amount exceeds maximum limit!\n");
        return 0;
    }
    return 1;
}

void printFormattedAmount(long long amount) {
    printf("\nAmount: %lld\n", amount);
    printf("In words: ");
    convertBDTToText(amount);
}
