#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void Print(vector<int> vec, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int Partition(vector<int> &vec, int st, int end)
{

    int pivot = vec[end];
    int idx = st - 1;
    for (int i = st; i < end; i++)
    {
        if (vec[i] <= pivot)
        {
            idx++;
            swap(vec[i], vec[idx]);
        }
    }
    idx++;
    swap(vec[idx], vec[end]);
    return idx;
}

// QuickSort function
vector<int> QuickSort(vector<int> vec, int st, int end)
{

    if (st < end)
    {
        int Index = Partition(vec, st, end);  // call partition function
        vec = QuickSort(vec, st, Index - 1);  // recursion
        vec = QuickSort(vec, Index + 1, end); // recursion
    }
    return vec;
}

int main(){
    int N;
    scanf("%d",&N);
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        scanf("%d",&vec[i]);
    }
    vector<int> Quick_S = QuickSort(vec, 0, vec.size() - 1);
     Print(Quick_S, N);

}