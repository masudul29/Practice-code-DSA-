#include<iostream>
using namespace std;
int main()
{
    int a1[5]={3,2,5,4,6};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a1[j]>a1[j+1])
            {
                int tmp=a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=tmp;
            }
            else continue;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a1[i]<<" ";
    }

}

