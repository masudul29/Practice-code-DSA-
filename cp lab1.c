#include <stdio.h>
//#include <stdlib.h>
int main()
{
    int a[5],arr1[5],arr2[5],arr3[5];
    printf("enter number");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);

    }
    int k=0,l=0,m=0;
    for(int i=0; i<5; i++)
    {

        if(a[i]>0)
        {
            arr1[k]=a[i];
            k++;
        }

        else  if(a[i]<0)
        {
            arr2[l]=a[i];
            l++;
        }
        else if (a[i]==0)
        {
            arr3[m]=a[i];
            m++;
        }

    }

    for(int k=0; k<5; k++)
    {
        printf("%d   ",arr1[k]);

    }
    for(int l=0; l<5; l++)
    {
        printf("%d   ",arr2[l]);

    }
    for(int m=0; m<5; m++)
    {
        printf("%d   ",arr3[m]);

    }




    return 0;

}

