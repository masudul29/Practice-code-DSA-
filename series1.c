#include<stdio.h>
#include <math.h>
int main()
{
    int a=2,b=1,num,i;
    printf("enter last number:");
    scanf("%d",&num);
    printf("2  1  ");
    while(num--)
    {
        int sum=0;
        sum=a+b;
        a=b;
        b=sum;

        printf("%d  ",sum);
    }

    return 0;
}





