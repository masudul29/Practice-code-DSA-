#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    
    int **arr=(int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++)
    {
        arr[i]=(int*)malloc(2*sizeof(int));
        
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;i<2;j++)
        {
            
            scanf("%d,(*(arr+i)+j)");
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;i<2;j++)
        {
            printf("%d",*(*(arr+i)+j));

        }
    }
    return 0;
}