#include <stdio.h>
int main()
{
    int i,value,num []={23,45,67,12,54,35} ;
    printf("enter the number that you want to search:");
    scanf("%d",&value);
    int position=-1;
    for(i=0;i<6;i++){
      if(value==num[i]){
        position=i+1;
        printf("value is found\nposition is=%d",position);
          }
    }
            if(position==-1){
           printf("value is not found");
           }




    return 0;
}
