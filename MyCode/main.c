//Name : Masudul Haque Rana
//Roll : 336
//Purpose : Swapping 2 numbers
#include <stdio.h>
#include "swap.h"

int main(){
   int num1, num2;
   printf("Enter 2 numbers(number1, number2) for swapping: ");
   scanf("%d %d", &num1, &num2);
   printf("Before swapping: number1 = %d, number2 = %d\n", num1, num2);
   swap(&num1, &num2);
   printf("After swapping: number1 = %d, number2 = %d", num1, num2);
}