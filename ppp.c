#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Size (n): ");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("Elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&(*(arr+i)));

    }
    printf("Original: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));

    }
    printf("\n");
    for(int i=0,j=n-1;i<n/2;i++)
    {
        int tmp=*(arr+j);
        *(arr+j)=*(arr+i);
        *(arr+i)=tmp;
        j--;
    }
    printf("Reversed: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));

    }
    free(arr);



    return 0;

}
