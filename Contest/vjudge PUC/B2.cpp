#include<bits/stdc++.h>
using namespace std;

int* solve(int arr[], int n)
{
	static int b[4];
	int p = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		b[p] = arr[i--];
		if (i >= 0)
			b[n - 1 - p] = arr[i];
		p++;
	}
	return b;
}

int main()
{
	int n, arr[1000];
	cin >> n;
	for(int i = 0; i < n; i++) {
        cin >> arr[i];
	}

	int *b ;
	b = solve(arr, n);
	for(int i = 0; i < n; i++)
	cout << b[i] << " ";
}


