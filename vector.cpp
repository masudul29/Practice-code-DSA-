#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int >vec={1,2,3,4};
    vec.push_back(5);
    cout<< "size=="<<vec.size()<<endl;
    vec.pop_back();
    vec.push_back(6);vec.push_back(7);
    
    cout<< "size=="<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    for(int i:vec){
           cout <<i<<" ";
    }
   
    return 0;

}