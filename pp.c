#include <stdio.h>
#include<stdlib.h>
int **allocation(int a,int b);
void read(int **p,int a,int b);
void print(int **p,int a,int b);

int main()
{
    int r,c;
    int **p;
    scanf("%d %d",&r,&c);
    p=allocation(r,c);
    read (p,r,c);
    print (p,r,c); return 0;
}
int **allocation(int a,int b)
{
    int **p=(int**)malloc(a*sizeof(int*));
    for(int i=0;i<a;i++)
    {
        p[i]=(int*)malloc(b*sizeof(int));

    }
    return (p);
}
void read(int **p,int a,int b)
{

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
         scanf("%10d",&*(*(p+i)+j));
        }
                 printf("\n");

    }
}
void print(int **p,int a,int b)
{
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
         printf("%10d",*(*(p+i)+j));
        }
                 printf("\n");

    }

}
