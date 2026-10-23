#include <bits\\stdc++.h>
using namespace std;
void marge(int ar[],int l,int m,int n);
void margeSort(int ar[],int i,int j);
int main()
{
    int ar[6] = {7,2,9,5,4,3};
   int  i=0;
    int j=5;
    margeSort(ar,i,j);
     

    return 0;
}
void margeSort(int ar[],int l,int r)
{
   
    int mid=(l+r)/2;
    if(l==r)
   return ;

    margeSort(ar,l,mid);
     margeSort(ar,mid+1,r);
     marge(ar,l,mid,r);


}
void marge(int ar[],int l,int m,int n)
{


    int a[l+n];
    int j = m;
    int i = l,k=0;

    while (i <m && j < n)
    {

        if (ar[i] < ar[j])
        {
            a[k++] = ar[i++];
            
        }
        else
        {
            a[k++] = ar[j++];
    
        }
    }
    while (i < m)
    {
        a[k++] = ar[i++];
        
    }
    while (j < n)
    {
        a[k++] = ar[j++];
      
    }
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }


}

