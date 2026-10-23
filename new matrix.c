#include <stdio.h>
int main()
{
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int i,j,n,m;
    printf("Enter the number of rows and colums: \n") ;
    scanf ("%d %d",&n,&m);
    printf("\nEnter element of matrix A: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the element of B matrix:\n\n");

    for(i=0;i<n;i++)
    {
        //printf("\t");
        for(j=0;j<m;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("A= ");
    for(i=0;i<n;i++)
    {
        printf("\t");
        for(j=0;j<m;j++)
        {
            printf("%-5d",A[i][j]);

        }
                    printf("\n");
    }
    printf("\n");

    printf("B= ");
    for(i=0;i<n;i++)
    {
        printf("\t");
        for(j=0;j<m;j++)
        {
            printf("%-5d",B[i][j]);

        }
                    printf("\n");
    }
    printf("\n");
    // printf("\nEnter element of matrix C : \n");
 /*   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("C[%d][%d]=",i,j);
            scanf("%d",&A[i][j]+B[i][j]);
        }
        printf("\n");
    }*/
    printf("A-B= ");
    for(i=0;i<n;i++)
    {
        printf("\t");
        for(j=0;j<m;j++)
        {
           C[i][j]=A[i][j]-B[i][j];
            printf("%-5d",C[i][j]);

        }
                   printf("\n");
    }
    return 0;

}


