#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c;
    printf("Rows: ");
    scanf("%d",&r);
    printf("Cols: ");
    scanf("%d",&c);

    int **arr=NULL;
    arr=(int**)malloc(r*sizeof(int*));

    for(int i=0;i<r;i++)
    {
        arr[i]=(int*)malloc(c*sizeof(int));
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",arr+(i*c+j));
        }
        printf("\n");
    }
    printf("element:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i>j)
            printf("0 ");
            else
                printf("%d ",*(arr+(i*c+j)));

        }
        printf("\n");
    }

    for(int j=0;j<c;j++)
    {
        int sum=0;
        for(int  i=0;i<r;i++)
        {
           sum=sum+*(*(arr+i)+j);
        }
     printf("sum of colomn %d: %d\n",j,sum);


    }
    for(int i=0;i<r;i++)
    {
        free(arr[i]);
    }
    
    free(arr);


    return 0;
}
