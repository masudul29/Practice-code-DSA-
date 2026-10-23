#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len=0;
    char s1[]="madam  ";
    char s2[30];
    for(i=0; s1[i]!='\0'; i++)
    {
        len++;


    }
    for(j=0,i=len-1;i>=0 ; j++,i--)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("%s\n",s1);
    printf("%s\n",s2);
    printf("%d\n",len);
    int d=strcmp(s1,s2);

    if(d==0)
        printf("equal");
    else printf("not equal");
    getchar();
}
