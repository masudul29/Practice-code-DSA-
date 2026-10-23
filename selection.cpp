#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
int main()
{
     int arr[5]={5,3,6,9,1};
     int small;int minindex;
     for(int i=0;i<4;i++)
     {   small=arr[i];minindex=i;
        for(int j=i+1;j<5;j++)
        {
            if(small>arr[j]){
                small=arr[j];
                minindex=j;
                
            }
            swap(arr[i],arr[minindex]);
            
        }
     }
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
     
return 0;
}