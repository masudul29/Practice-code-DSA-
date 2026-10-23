#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> RandomNumber(int N, int st = 0, int end = 50)
{
    vector<int> vec;

    for (int i = 0; i < N; i++)
    {
        vec.push_back(st + (rand() % (end - st + 1))); // number must be between end to start
    }
    cout << "random num____::";
    for (int i = 0; i < N; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    return vec;
}

int findDigit(int a, int pos)
{
    int rem;
    for (int i = 0; i <= pos; i++)
    {
        rem = a % 10;
        a = a / 10;
    }
    return rem;
}

void RadixSort(vector<int> &vec)
{
    int k = INT_MIN, sz;
    sz = vec.size();
    for (int i = 0; i < vec.size(); i++)
    {
        k = max(k, vec[i]);
    }
    int dk = 0;
    while (k != 0)
    {
        k = k / 10;
        dk++;
    }
    // int idk;

    for (int m = 0; m < dk; m++)
    {
        vector<int> arr(10, 0);
        vector<int> vec1(sz);
        for (int j = 0; j < sz; j++)
        {
            int idk = findDigit(vec[j], m);
            arr[idk]++;
        }
        for (int i = 1; i < 10; i++)
        {
            arr[i] = arr[i] + arr[i - 1];
        }
        for (int i = sz-1; i >= 0; i--)
        {
            int idk = findDigit(vec[i], m);
            arr[idk]--;
            vec1[arr[idk]] = vec[i];
        }
        for (int i = 0; i < sz; i++)
        {
            vec[i] = vec1[i];
        }
    }
}

int main()
{
    //vector<int> vec = {123, 56, 152, 775, 995};
    srand(time(0)); // change of random number for every run

    int N; // Number of array element
    cout << "--enter element num-- ";
    cin >> N;

    vector<int> vec = RandomNumber(N, 134, 874);
    RadixSort(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
