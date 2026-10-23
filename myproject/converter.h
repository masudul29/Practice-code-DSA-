
#ifndef CONVERTER_H
#define CONVERTER_H

// Structure for unit definitions
typedef struct {
    long long value;
    const char *label;
} UnitDefinition;

// Function declarations
void convertBDTToText(long long amount);
void convertBDTToWords(long long amount);
int validateAmount(long long amount);
void printFormattedAmount(long long amount);
void convertNumberToText(int number, char *buffer);

#define MAX_AMOUNT 9999999999LL
#define MIN_AMOUNT 0LL
#define NUM_UNITS 5

#endif
