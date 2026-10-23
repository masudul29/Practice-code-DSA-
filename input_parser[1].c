/*Masudul Haque Rana
ROll:336*/
#include <stdio.h>
#include <string.h>

int main(void) {
    int month, day, year;
    int hour, minute, second;
    char code1[20], code2[20];
    int num;
    double a, b, result;
    char op;
    char text[200];

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Formatted date: Month %d, Day %d, Year %d\n\n", month, day, year);

    printf("Enter time (hh:mm:ss): ");
    scanf("%d:%d:%d", &hour, &minute, &second);
    if (hour >= 12)
        printf("12-hour format: %d:%02d:%02d PM\n\n", hour - 12, minute, second);
    else
        printf("12-hour format: %d:%02d:%02d AM\n\n", hour, minute, second);

    printf("Enter product code (ABC-1234-XYZ): ");
    scanf("%[^-]-%d-%s", code1, &num, code2);
    printf("Components: %s, %d, %s\n\n", code1, num, code2);

    printf("Enter simple expression (num operator num): ");
    scanf("%lf %c %lf", &a, &op, &b);
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;

    else if (op == '/') result = a / b;
    printf("Result: %.2f\n\n", result);

    printf("Enter text (end with #): ");
    scanf(" %[^\n#]", text);
    printf("You entered: %s\n", text);

    return 0;
}
