#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the row number: ");
    scanf("%d",&n);
     printf("\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",j);
        }
        printf("\n");
    }

    return 0;
}
