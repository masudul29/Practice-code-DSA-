#include<stdio.h>
int main()
{
    int i=10;

    rana:
        printf("%d\t",i);
        i++;
        if(i<9)
        goto rana;
        return 0;
}
