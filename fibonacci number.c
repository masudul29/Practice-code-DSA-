#include<stdio.h>
int main()
{
    int i,n,sum=0,ara[100];
    ara[0]=0;
    ara[1]=1;
    printf("the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        ara[i]=ara[i-2]+ara[i-1];
       // printf("%d ",ara[i]);
        //sum=0;

    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
