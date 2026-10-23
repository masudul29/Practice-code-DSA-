#include <iostream>
#include <vector>    //vector
#include <algorithm> //max number
#include <climits>   //INT_MIN

using namespace std;

void CountSort(vector<int> &vec, int N)
{
    int K = 102;
   //   for (int i = 0; i < N; i++)
    //{
      //  K = max(K, vec[i]); // maximun number of array
    //}


    vector<int> arr(102, 0);
    for (int i = 0; i < N; i++)
    {
        arr[vec[i]]++; // number frequency
    }
    for (int i = 1; i <= 100; i++)
    {
        arr[i] = arr[i] + arr[i - 1]; // cumulative sum
    }
    vector<int> vec1(N + 1);

    for (int i = N - 1; i >= 0; i--)
    {
        vec1[arr[vec[i]]] = vec[i]; // last to first idexing
        arr[vec[i]]--;
    }
    for (int i = 1; i < N + 1; i++)
    {
        cout<<vec1[i]<<(i==N?"":" "); // print array
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    
    while(1)
    {
        cin >> n;
        if(n==0){
            break;
        }
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        CountSort(vec, n); // funtion call for sort
        cout<<"\n";
    }
    
    return 0;
}
