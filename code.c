#include <stdio.h>

int main() {
    int i, amount;
    int n1000, n500, n100, n50, n20, n10, n5, n2, n1;
    int staffCount = 10;
    int salary[10];

    printf("Enter the take-home salary (in BDT) for 10 staff members:\n");

    for(i = 0; i < staffCount; i++) {
        printf("Staff %d: ", i + 1);
        scanf("%d", &salary[i]);
    }

    printf("\n----- Salary Coinage Distribution -----\n");

    for(i = 0; i < staffCount; i++) {
        amount = salary[i];

        n1000 = amount / 1000; amount %= 1000;
        n500  = amount / 500;  amount %= 500;
        n100  = amount / 100;  amount %= 100;
        n50   = amount / 50;   amount %= 50;
        n20   = amount / 20;   amount %= 20;
        n10   = amount / 10;   amount %= 10;
        n5    = amount / 5;    amount %= 5;
        n2    = amount / 2;    amount %= 2;
        n1    = amount;

        printf("\nStaff %d:\n", i + 1);
        printf("Take-home Salary: BDT %d\n", salary[i]);
        printf("1000 Tk notes: %d\n", n1000);
        printf(" 500 Tk notes: %d\n", n500);
        printf(" 100 Tk notes: %d\n", n100);
        printf("  50 Tk notes: %d\n", n50);
        printf("  20 Tk notes: %d\n", n20);
        printf("  10 Tk notes: %d\n", n10);
        printf("   5 Tk coins: %d\n", n5);
        printf("   2 Tk coins: %d\n", n2);
        printf("   1 Tk coins: %d\n", n1);
    }

    return 0;
}
