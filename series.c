#include<stdio.h>
#include <math.h>
int main()
{
   double i,sum=0,num;
    printf("enter last number: ");
    scanf("%lf",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/i);
        if(i==1)
            printf("%.2lf + ",i);
        else if(i==num)
            printf("11/%.2lf\n",i);
        else
        printf("1/%.2lf + ",i);
    }
    printf("sum= %.2lf",sum);
    return 0;

}
