#include <stdio.h>
int main()
{
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0,j=5;i<10;)
    {
        int temp =arr1[i];
        arr1[i]=arr1[i+1];
        arr1[i+1]=temp;
        i+=2;

    }
    for(int i=0;i<10;i++)
     printf("%d  ",arr1[i]);
    return 0;
}
