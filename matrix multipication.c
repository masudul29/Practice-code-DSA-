#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    printf("Enter the number of rows and colums of matrix A: \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and colums of matrix B: \n");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("!!!E-RR-O-R\n");
        printf("Enter the number of rows and colums of matrix A: \n");
        scanf("%d%d",&r1,&c1);
        printf("Enter the number of rows and colums of matrix B: \n");
        scanf("%d%d",&r2,&c2);

    }

    //taking element of matrix A
    printf("\n--Enter the element of matrix A--\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
       // printf("\n");
    }
    //taking element of matrix B
    printf("\n--Enter the element of matrix B--\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
       // printf("\n");
    }
    printf("\nA matrix=");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {

          printf("%2d  ",A[i][j]);
        }
        printf("\n\t");
    }
     printf("\nB matrix=");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
          printf("%2d  ",B[i][j]);
        }
        printf("\n\t");
    }
    //multipiying  matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                C[i][j]=A[i][k]*B[k][j];
                sum=sum+C[i][j];
                C[i][j]=sum;
            }
            sum=0;
        }
    }
    printf("\nA*B matrix=");
                for(i=0;i<r1;i++)
                {
                    printf("\t");
                    for(j=0;j<c2;j++)
                    {
                        printf("%2d   ",C[i][j]);
                    }
                    printf("\n\t");
                }


    return 0;

}
