#include <stdio.h>
int main(){
    int coin[]={1000,500,200,100,50,20,10,5,2,1};
    int i,staff=5,salary[5],amount;
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