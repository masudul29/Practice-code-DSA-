#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the row number: ");
    scanf("%d",&n);
     printf("\n");
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
    return 0;
}

