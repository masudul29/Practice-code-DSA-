#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<ctime>
#include<cmath>

using namespace std;

void heapify (vector<int>&vec,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<=n-1&&vec[left]<vec[largest]){
        largest=left;
    }
    if(right<=n-1&&vec[right]<vec[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(vec[largest],vec[i]);
         heapify(vec,n,largest);

    }
   
}

void Build_Heap(vector<int>&vec,int n){
    for(int i=n/2-1;i>=0;i--){
         heapify(vec,n,i);
    }
    
    for(int i=n-1;i>=0;i--){
       swap(vec[i],vec[0]);
       heapify(vec,i,0);
    }
     for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

}
int main(){
    vector<int>vec={11,7,5,10,22,14,18};
    int n=vec.size();
    Build_Heap(vec,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }


    return 0;
}