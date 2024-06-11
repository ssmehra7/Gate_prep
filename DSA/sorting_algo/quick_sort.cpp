#include <bits/stdc++.h>
using namespace std;

int find_partition_idx(vector<int> &v, int low, int high)
{
	int i = low, j = high;
	int pivot = v[low];

	while (i < j)
	{

		while (v[i] <= pivot and i < high)
		{
			i++;
		}
		while (v[j] > pivot and j > low)
		{
			j--;
		}

		if (i < j)
			swap(v[i], v[j]);
	}

	swap(v[low], v[j]);

	return j;
}

void quick_sort(vector<int> &v, int low, int high)
{

	if (low < high)
	{
		int partition_idx = find_partition_idx(v, low, high);
		quick_sort(v, low, partition_idx - 1);
		quick_sort(v, partition_idx + 1, high);
	}
}

void print_vector(vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;
}

int main()
{
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	cout << "This is your actual array --- " << endl;
	print_vector(v);

	quick_sort(v, 0, n - 1);
	cout << "This is your sorted array by quick_sort -- -- " << endl;
	print_vector(v);
}
