#include <iostream>
using namespace std;
int main()
{
    int T;
    
    cin >> T;
    while (T--)
    {
        int count = 0;
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] % 2 != 0)
        {
            for (int i = 2; i < n; i+=2)
            {
                if (a[i] % 2 == 0)
                {
                    count++;
                }
            }
            for (int i = 1; i < n; i+=2)
            {
                if (a[i] % 2 != 0)
                {
                    count++;
                }
            }
        }
        else if (a[0] % 2 == 0)
        {
            for (int i = 2; i < n; i+=2)
            {
                if (a[i] % 2 != 0)
                {
                    count++;
                }
            }
             for (int i = 1; i < n; i +=2)
            {
                if (a[i] % 2 == 0)
                {
                    count++;
                }
            }
        }
        cout << count<<endl;
    }
}
