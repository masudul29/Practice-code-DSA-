#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    for(int j=1;j<=t;j++)
   {
    cin>>n;
    int i=2,count=0;
        while(n>=i)
        {
          if(n%i==0)
          {
           count++;
          }

          i++;
        }
        cout<<"Case "<<j<<":"<<" "<<count<<endl;

    }
    return 0;
}
