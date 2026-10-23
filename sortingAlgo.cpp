#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define LL long long
#define MOD 1000000007
void merge(vector<int> &arr, vector<int> &left, vector<int> &right, bool ascending)
{
	int l = 0, r = 0, a = 0;

	while (l < left.size() and r < right.size())
	{
		if (ascending)
		{
			if (left[l] < right[r])
			{
				arr[a] = left[l];
				l++;
			}
			else
			{
				arr[a] = right[r];
				r++;
			}
			a++;
		}
		else
		{
			if (left[l] > right[r])
			{
				arr[a] = left[l];
				l++;
			}
			else
			{
				arr[a] = right[r];
				r++;
			}
			a++;
		}
	}

	while (l < left.size())
	{
		arr[a] = left[l];
		l++;
		a++;
	}

	while (r < right.size())
	{
		arr[a] = right[r];
		r++;
		a++;
	}
}
void MergeSort(vector<int> &arr, bool ascending)
{
	int sz = arr.size();
	if (sz < 2)
	{
		return;
	}

	vector<int> left, right;

	int mid = sz / 2;
	for (int i = 0; i < sz; i++)
	{
		if (i < mid)
		{
			left.push_back(arr[i]);
		}
		else
			right.push_back(arr[i]);
	}

	MergeSort(left, ascending);
	MergeSort(right, ascending);
	merge(arr, left, right, ascending);
}
void solve()
{
	int n, mod;
	while (scanf("%d %d", &n, &mod) == 2)
	{

		if (n == 0 and mod == 0)
		{
			// cout << 0 <<" "<<0;
			printf("%d %d\n", n, mod);
			break;
		}

		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			// cin >> arr[i];
			scanf("%d", &arr[i]);
		}

		int sz = 2 * mod - 1;

		vector<vector<int>> store(sz);
		for (auto x : arr)
		{
			int md = x % mod;
			int inx = md + (mod - 1);
			store[inx].push_back(x);
		}
		printf("%d %d\n", n, mod);

		for (int i = 0; i < sz; i++)
		{
			if (store[i].empty())
				continue;
			vector<int> oddHalf, evenHalf;
			for (auto x : store[i])
			{
				if (x % 2 == 0)
					evenHalf.push_back(x);
				else
					oddHalf.push_back(x);
			}

			// for(auto x: oddHalf) cout << x <<" ";
			// cout<<endl;
			// for(auto y: evenHalf) cout << y <<" ";
			// cout<<endl;

			MergeSort(oddHalf, false); // reverse
			MergeSort(evenHalf, true); // normal

			// cout<<"after sort\n";
			// for(auto x: oddHalf)cout << x << " ";
			// cout << endl;
			// for(auto x: evenHalf)cout << x << " ";
			// cout << endl << "---";

			for (auto x : oddHalf)
				printf("%d\n", x);
			for (auto x : evenHalf)
				printf("%d\n", x);

			// for(auto x: store){
			// for(auto y: x){
			// // cout << y << endl;
			// }
			// // cout<<endl;
			// }
		}
	}
}
int main()
{
	ll testCase = 1;
	// cin >> testCase;
	while (testCase--)
	{
		solve();
		// for(auto x: arr) cout << x << " ";
		// cout << endl;
	}
	return 0;
}