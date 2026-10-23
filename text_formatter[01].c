/*Masudul Haque Rana
ROll:336*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[256];
    char c;

    printf("Enter a string ( no spaces ) : ");
    scanf("%255s", s);

    printf("Enter a character : ");
    scanf(" %c", &c);

    char first3[4] = {0};
    first3[0] = s[0];
    first3[1] = s[1];
    first3[2] = s[2];

    size_t len = strlen(s);
    const char *last4 = s;
    if (len > 4) last4 = s + (len - 4);

    printf("\nString Formatting :\n");
    printf("Default : %s\n", s);
    printf("Right - aligned ( width 15) : %15s\n", s);
    printf("Left - aligned ( width 15) : %-15s\n", s);
    printf("First 3 characters : %s\n", first3);
    printf("Last 4 characters : %s\n", last4);

    printf("\nCharacter Formatting :\n");
    printf("As character : %c\n", c);
    printf("As decimal : %d\n", (unsigned char)c);
    printf("As hexadecimal : %02X\n", (unsigned char)c);
    printf("Formatted : The character '%c' has ASCII value %d\n", c, (unsigned char)c);

    return 0;
}
