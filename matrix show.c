#include <stdio.h>
int main()
{
    int A[3][4];
    int B[3][4];
    int i,j,n;
    printf("Enter element of matrix A: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
printf("A= ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%-5d",A[i][j]);

        }
                    printf("\n");
    }
    printf("\nEnter the element of B matrix:\n\n");

    for(i=0;i<3;i++)
    {
        //printf("\t");
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B= ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%-5d",B[i][j]);

        }
                    printf("\n");
    }
    return 0;

}
