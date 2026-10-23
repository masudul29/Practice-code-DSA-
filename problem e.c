
#include<stdio.h>
int main()
{
    int t,n,a,b,c,d,e,f,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=n/100000;
        p=n%100000;
        b=p/10000;
        p=p%10000;
        c=p/1000;
        p=p%1000;
        d=p/100;
        p=p%100;
        e=p/10;
        p=p%10;
        f=p;
        if(a+b+c==d+e+f)
        {
            printf("YES\n");
        }
        else{printf("NO\n");}
    }
    return 0;
}




