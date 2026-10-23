/**
@Name:Masudul Haque Rana
@File Name:336_2B.c
@purpose:To develop an automated system that can calculate and display the exact number of currency notes and coins (denominations) required to pay each staff member their take-home salary in cash.
@Date:26/10/2025
*/

#include <stdio.h>
int main(){
    int coin[]={1000,500,200,100,50,20,10,5,2,1};
    int i,staff=10,salary[10],amount;
    printf("staffs net salary(BDT):\n");

    for(i=1;i<=staff;i++){
        printf("staff %d:",i);
        scanf("%d",&salary[i]);
    }

    printf("\n!!--salary coinage distributio--!!\n");

    for(i=1;i<=staff;i++){
        amount=salary[i];
        printf("\nstaff %d salary BDT %d \n",i,amount);

	for(int j=0; j<10; j++){
	    if(amount>=coin[j]){
	        int count=amount/coin[j];
		amount=amount%coin[j];
		printf("BDT %d: %d\n", coin[j], count);
            }
        }
     }
     return 0;
}