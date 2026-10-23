#include<stdio.h>
int main ()
{
    int t,n,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<b&&b<c||c<b&&b<a)
        {
            printf("%d\n",b);
        }
        else if(b<a&&a<c||c<a&&a<b)
        {
            printf("%d\n",a);

        }
        else if(a<c&&c<b||c<a&&b<c)
        {
            printf("%d\n",c);
        }


    }
    return 0;
}
