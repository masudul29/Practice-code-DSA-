#include <stdio.h>
int main()
{
    int i,j,n,m;
    int A[100][400];
    printf("enter the row and column number:\n(n,m)=") ;
    //printf("\n");
    scanf("%d%d",&n,&m);
    //printf("A[%d][%d]=n,m");

    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
        printf("A[%d][%d]=",i,j);
        scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%-10d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;

}
