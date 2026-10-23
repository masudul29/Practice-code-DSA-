#include "swap.h"

void swap(int *num1, int*num2){
    int tem = *num1;
    *num1 = *num2;
    *num2 = tem;
}