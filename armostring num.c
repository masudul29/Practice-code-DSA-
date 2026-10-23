
#include <stdio.h>
#include<math.h>
int main()
{
    int num1,num2,rem,i,temp,sum=0;
    printf("Enter number :");
    scanf("%d %d",&num1,&num2);

    num1=abs(num1);
    num2=abs(num2);
    for(i=num1; i<=num2; i++)
    {

        temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+pow(rem,3);
            temp=temp/10;
        }
        if(i==sum)
            printf("%4d",i);
    }
        //if (num==sum)
        //{
        //  printf("armstrong number\n");
        //}//
        //else
        //  printf("not armstrong number");
     return 0;
    }
