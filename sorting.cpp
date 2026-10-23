#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(a1[i]>a1[j])
            {
                int tmp=a1[i];
                a1[i]=a1[j];
                a1[j]=tmp;


            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a1[i]<<" ";

    }
    return 0;
    

} 