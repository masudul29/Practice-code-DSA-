
#include <stdio.h>
#include<math.h>
int main()
{
    int num1,rem,i,temp,fact=1,sum=0;
    printf("Enter number :");
    scanf("%d",&num1);

    //sszxnum1=abs(num1);

    temp=num1;
    while(temp!=0)
    {
        rem=temp%10;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        fact=1;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}
