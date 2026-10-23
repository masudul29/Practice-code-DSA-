#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)calloc(5,sizeof(int));
    for (int i=0;i<5;i++)
    {
        ptr[i]=i+2;

    }
    for(int i=0;i<5;i++)
    {
        printf("%d  ",*(ptr+(i)));
        
    }
    free(ptr);
    ptr=NULL;
    int *tmp=(int*)realloc(ptr,8*sizeof(int));
    for (int i=0;i<8;i++)
    {
        tmp[i]=i+2;

    }
    for(int i=0;i<8;i++)
    {
        printf("%d  ",*(tmp+(i)));
        
    }
    
    return 0;
}