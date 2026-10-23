#include <stdio.h>
int main ()
{
    int i,j;
    int ara[]={1,2,3,4,5,6,7,8,9};
    int ara2[9];
    for(i=0,j=8;i<9,j>=0;i++,j--){
    ara2[j]=ara[i];
   // printf("%d",ara2[j]);

    }
    for(i=0;i<9;i++){
        ara[i]=ara2[j];
    }


   printf("%d",ara[i]);

    return 0;

}
