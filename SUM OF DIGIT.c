#include <stdio.h>
#include<math.h>
int main()
{
    int num,rem,temp,sum=0;
    printf("Enter number :");
    scanf("%d",&num);
    num=abs(num);
    temp=abs(num);
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("reverse number %d ",sum);
    if (num==sum)
    {
      printf("\npalindrom number\n");
    }else
    printf("not palindrom number");
    getchar();

}
