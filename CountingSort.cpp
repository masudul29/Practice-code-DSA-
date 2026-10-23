#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {4, 7, 1, 6, 5, 2, 9, 3, 2};
    int sz = vec.size();
    int K = INT_MIN; //
    for (int i = 0; i < sz; i++)
    {
        K = max(K, vec[i]);
    }
    // cout <<sz<<endl;

    vector<int> vec1(K + 1, 0);

    for (int i = 0; i < sz; i++)
    {
        vec1[vec[i]]++;
    }
    vector<int> vec2(sz + 1);

    for (int i = 1; i < K + 1; i++)
    {
        vec1[i] = vec1[i - 1] + vec1[i];
    }
    for (int i = 0; i <= K; i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
    for (int i = sz-1; i >= 0; i--)
    {
        vec2[vec1[vec[i]]] = vec[i];
        vec1[vec[i]]--;
    }
    for (int i = 1; i <=sz; i++)
    {
        cout << vec2[i] << " ";
    }

    return 0;
}