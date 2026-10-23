
#include<stdio.h>
int main ()
{
    int a=0,b=1,n,c;
    int count=0;
    printf("number: ");
    scanf("%d",&n);
    printf("%d-",a);
    printf(" %d-",b);
    for(count=0;count<=n;count++)
    {

        c=a+b;
        printf("%d-",c);
        a=b;
        b=c;

    }
    return 0;
}
