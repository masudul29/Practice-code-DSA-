#include <iostream>
#include <vector>    //dinamic array
#include <cstdlib>   // srand()
#include <algorithm> //swap()
#include <ctime>     //srand(time())
#include <chrono>    //std::chrono

using namespace std;
using namespace std::chrono; // high_resolution_clock::

// Print array
void Print(vector<int> vec, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Random value input
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

// Bouble sort function
vector<int> BoubleSort(vector<int> vec, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }

    return vec;
}

// Selection sort function
vector<int> SelectionSort(vector<int> vec, int N)
{
    int j;
    for (int i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (vec[i] > vec[j])
            {
                swap(vec[i], vec[j]);
            }
            // Print(vec,N);
        }
    }

    return vec;
}

// Insertion sort function
vector<int> InsertionSort(vector<int> vec, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (vec[j] < vec[j - 1])
            {
                swap(vec[j], vec[j - 1]);
            }
        }
    }
    return vec;
}

// Function of Marge
vector<int> Marge(vector<int> vec1, vector<int> vec2, int p, int q)
{
    vector<int> vec3(p + q);
    int k = 0;
    int i = 0, j = 0;

    while (i < p && j < q)
    {
        if (vec1[i] < vec2[j])
        {
            vec3[k++] = vec1[i];
            i++;
        }
        else
        {
            vec3[k++] = vec2[j];
            j++;
        }
    }
    while (i < p)
    {
        vec3[k++] = vec1[i++];
    }
    while (j < q)
    {
        vec3[k++] = vec2[j++];
    }
    return vec3;
}

// MargeSort Function
vector<int> MargeSort(vector<int> vec, int N)
{
    if (N <= 1)
    {
        return vec;
    }
    int mid = N / 2;

    vector<int> vec1(vec.begin(), vec.begin() + mid);
    vector<int> vec2(vec.begin() + mid, vec.end());
    vec1 = MargeSort(vec1, vec1.size());
    vec2 = MargeSort(vec2, vec2.size());
    vector<int> MargeS = Marge(vec1, vec2, vec1.size(), vec2.size()); // call marge function
    return MargeS;
}

// Function of QuickSort Partiton
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



int main()
{
    srand(time(0)); // change of random number for every run

    int N; // Number of array element
    cout << "--enter element num-- ";
    cin >> N;

    vector<int> vec = RandomNumber(N, 45, 85); // Random function call

    auto Bouble_start = high_resolution_clock::now(); // for time measure
    vector<int> Bouble_S = BoubleSort(vec, N);        // Boublesort function call
    auto Bouble_end = high_resolution_clock::now();
    cout << "__Bouble Sort__" << endl;
    Print(Bouble_S, N); // print of array

    auto Selection_start = high_resolution_clock::now();
    vector<int> Selection_S = SelectionSort(vec, N);
    auto Selection_end = high_resolution_clock::now();
    cout << "**selection sort***" << endl;
    Print(Selection_S, N); // print of array

    auto Insertion_start = high_resolution_clock::now();
    vector<int> Insertion_S = InsertionSort(vec, N);
    auto Insertion_end = high_resolution_clock::now();
    cout << "***Insertion Sort**" << endl;
    Print(Insertion_S, N); // print of array

    auto Marge_start = high_resolution_clock::now();
    vector<int> Marge_S = MargeSort(vec, N);
    auto Marge_end = high_resolution_clock::now();
    cout << "__**Marge Sort**__" << endl;
    Print(Marge_S, N); // print of array

    auto Quick_start = high_resolution_clock::now();
    vector<int> Quick_S = QuickSort(vec, 0, vec.size() - 1);
    auto Quick_end = high_resolution_clock::now();
    cout << "***Quick Sort**" << endl;
    Print(Quick_S, N); // print of array

    auto B_duration = duration_cast<nanoseconds>(Bouble_end - Bouble_start);
    long long B_time = B_duration.count();
    cout << "Bouble sort algo time:---" << B_time << endl; //    print bouble time

    auto S_duration = duration_cast<nanoseconds>(Selection_end - Selection_start);
    long long S_time = S_duration.count();
    cout << "Selectopn sort algo time:---" << S_time << endl; // print selection  time

    auto I_duration = duration_cast<nanoseconds>(Insertion_end - Insertion_start);
    long long I_time = I_duration.count();
    cout << "Insertion sort algo time:---" << I_time << endl; // print insertion time

    auto M_duration = duration_cast<nanoseconds>(Marge_end - Marge_start);
    long long M_time = M_duration.count();
    cout << "Marge sort algo time:---" << M_time << endl; // print marge time

    auto Q_duration = duration_cast<nanoseconds>(Quick_end - Quick_start);
    long long Q_time = Q_duration.count();
    cout << "Quick sort algo time:---" << Q_time << endl; // print quick time

    return 0;
}
