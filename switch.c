#include<stdio.h>
int main()
{
    int T;
    printf("enter you want to run the test :\n");
    scanf("%d",&T);
    while(T--)
    {
    int choice;
    float ff,cc,C,F;
        printf  ("1.F\n");
    printf("2.C\n");
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("enter the fahrenheit temp.:\n");
        scanf("%f",&F);
        cc=(F-32)*.56;
        printf("%lf\n",cc);
        break;
    case 2:
        printf("enter the celsius temp.:\n");
        scanf("%lf",&C);
        ff=C/5*9+32;
        printf("%f\n",ff);
        break;
    default:
        printf("not valid\n");
        break;

    }
    }
    return 0;
}
