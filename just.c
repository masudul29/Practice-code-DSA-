#include <stdio.h>

void testFunction(int arr[], int *p) {
    printf("Size of arr[]: %zu\n", sizeof(arr));
    printf("Size of *p:    %zu\n", sizeof(p));
}

int main() {
    int myArr[10];
    int *ptr = myArr;

    testFunction(myArr, ptr);
    return 0;
}