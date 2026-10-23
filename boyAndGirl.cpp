#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[100];
    cin>>name;
    strlwr(name);
    int count =0;
    int L= strlen(name);
    
    for(int i=0;i<L;i++)
    {

        int count1=0;
        for(int j=i+1;j<L;j++)
        {
              if(name[i]==name[j]){

              
            count1=1;
            break;
              }
                
            
        }
         if(count1==0)
        count++;
       
    }  
    if(count%2!=0)
    cout<<"girl";
    else cout<<"boy";

        
    
    return 0;

}