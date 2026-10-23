/*Masudul Haque Rana
ROll:336*/
#include <stdio.h>

int main(void) {
    int n;
    double x;

    printf("Enter an integer : ");
    scanf("%d", &n);

    printf("Enter a floating - point number : ");
    scanf("%lf", &x);

    printf("\nInteger Formatting :\n");
    printf("Default : %d\n", n);
    printf("Right - aligned ( width 10) : %10d\n", n);
    printf("Left - aligned ( width 10) : %-10d\n", n);
    printf("Zero - padded ( width 10) : %010d\n", n);
    printf("With sign : %+d\n", n);

    printf("\nFloat Formatting :\n");
    printf("Default : %f\n", x);
    printf("2 decimal places : %.2f\n", x);
    printf("4 decimal places : %.4f\n", x);
    printf("Scientific : %e\n", x);
    printf("Scientific (3 decimal ) : %.3e\n", x);

    return 0;
}
