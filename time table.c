#include<stdio.h>
#include<math.h>
int main()
{
    while (1)
    {
        int num,i,j,num1,count=0,countprimenum=0,sumofprime=0;

         printf("enter the start number:");
        scanf("%d",&num1);
        printf("enter the last number:");
        scanf("%d",&num);

        for(j=num1; j<=num; j++)
        {
            count=0;
            if(j<=1)
                count++;
            else
            {

                for(i=2; i<j; i++)
                {
                    if(j%i==0)
                    {
                        count++;
                        break;
                    }

                }
            }
            if(count==0)
               {
                printf("%d ",j);
                countprimenum++;
                sumofprime=sumofprime+j;
               }


        }
        printf("\nNumber of prime number : %d\n",countprimenum);
         printf("Number of prime number : %d\n",sumofprime);
    }printf("\n");
    return 0;
}





