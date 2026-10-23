#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>

using namespace std;

void CountingSort(vector<int>&vec, int N)
{
    int K = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        K = max(K, vec[i]);
    }
    vector<int> arr(K + 1, 0);
    for (int i = 0; i < N; i++)
    {
        arr[vec[i]]++;
    }
    for (int i = 1; i < K + 1; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    vector<int> vec1(N + 1);
    for (int i = N - 1; i >= 0; i--)
    {
        vec1[arr[vec[i]]] = vec[i];
        arr[vec[i]]--;
    }
    for (int i = 1; i < N + 1; i++)
    {
        printf("%d\n", vec1[i]);
    }
}

int main()
{

    int N;
    scanf("%d", &N);
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vec[i]);
    }

    CountingSort(vec, N);

    return 0;
}