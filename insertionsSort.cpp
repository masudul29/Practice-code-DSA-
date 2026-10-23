#include<iostream>
using namespace std;
int  main( ){
    int arr[5]={9,4,6,3,7};
    for(int i=0;i<5;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
        {
            int tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
        }

        }

    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}