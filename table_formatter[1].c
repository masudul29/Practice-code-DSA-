/*Masudul Haque Rana
ROll:336*/
#include <stdio.h>

int main(void) {
    int id[5], qty[5];
    char name[5][30];
    double price[5], discount[5], total[5];
    double grand_total = 0, avg = 0;
    int i, max_i = 0, min_i = 0;

    printf("Enter product data for 5 items:\n");
    for (i = 0; i < 5; i++) {
        printf("\nItem %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &id[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Price: ");
        scanf("%lf", &price[i]);
        printf("Quantity: ");
        scanf("%d", &qty[i]);
        printf("Discount (%%): ");
        scanf("%lf", &discount[i]);

        total[i] = price[i] * qty[i];
        grand_total += total[i];
        avg += price[i];
    }

    avg /= 5;

    for (i = 1; i < 5; i++) {
        if (price[i] > price[max_i]) max_i = i;
        if (price[i] < price[min_i]) min_i = i;
    }

    printf("\nProduct Table:\n");
    printf("+------+----------------+-----------+-----------+-----------+--------------+\n");
    printf("| ID   | Name           | Price     | Quantity  | Discount  | Total Value  |\n");
    printf("+------+----------------+-----------+-----------+-----------+--------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| %-4d | %-14s | %9.2f | %9d | %8.1f%% | %12.2f |\n",
               id[i], name[i], price[i], qty[i], discount[i], total[i]);
    }

    printf("+------+----------------+-----------+-----------+-----------+--------------+\n");

    printf("\nSummary Statistics:\n");
    printf("Grand Total Value: $%.2f\n", grand_total);
    printf("Average Price: $%.2f\n", avg);
    printf("Highest Priced: %s ($%.2f)\n", name[max_i], price[max_i]);
    printf("Lowest Priced: %s ($%.2f)\n", name[min_i], price[min_i]);

    return 0;
}
