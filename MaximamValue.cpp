#include <iostream>
using namespace std;
  int sumof(int ar[],int n);
 void reverse(int b[],int arr[],int m) ;
int main ()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int sum[m];
    for(int i=0;i<m;i++){
        reverse(b,a,m);
        sum[i]= sumof(a,n);
    }
    for(int i=0;i<m;i++)
    {
        cout<<sum[i];
    }
   
}
    int j=0;
   void reverse(int b[],int arr[],int m )
   {
    
      for(int i=0;i<b[j];i++)
    {
        arr[i]=-1*arr[i];
   
    }
    j++;

   }



    int sumof(int ar[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+ar[i];
        }
        return sum;
    }
   
    
   


