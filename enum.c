#include<stdio.h>
int main()
{
    int n;
    long int p,q;
    double m=1.00;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        while(p/q==0)
        {
            m=p/q;
            p=p-1;
            q=q-1;
            if(m==2.00/3.00)
                break;

        }
        if (m=2/3)
            printf("Alice");
        else
            printf("Bob");



        /*if(m==2.00/3.00)
        {
            printf("Bob\n");

        }
        else
            printf("Alice\n");*/
    }
    return 0;
}
