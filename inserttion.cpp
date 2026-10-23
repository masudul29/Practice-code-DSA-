#include <bits\stdc++.h>
using namespace std;
int main()
{
    int arr[5]={9,5,3,8,2};
    for(int i=0;i<5;i++)
    {
         for(int j=i;j>0;j--)
         {
             if(arr[j]<arr[j-1])
             swap(arr[j],arr[j-1]);
          
         }
    }
    
    for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }

}