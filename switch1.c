#include<stdio.h>
int main()
{
    double num1,num2,num3;
    char oper;
    printf("enter operator(+,-,*./):");
    scanf("%c",&oper);
    printf("enter two number:");
    scanf("%lf %lf",&num1,&num2);

    switch(oper)
    {
    case '+':
        printf("%.2lf+%.2lf=%.2lf",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.2lf-%.2lf=%.2lf",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.2lf/%.2lf=%.2lf",num1,num2,num1/num2);
        break;
    default:
        printf("E--RR--OR");

    }
    return 0;



}
