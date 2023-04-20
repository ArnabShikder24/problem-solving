#include <bits/stdc++.h>
using namespace std;

void solveEven(int n, int* arr, int* b)
{
	int left = n - 1;

	for (int i = 0; i < (n / 2); ++i) {
		b[i] = arr[left];
		left = left - 2;
		if (left < 0)
			break;
	}

	int right = 0;
	for (int i = n / 2; i <= n - 1; ++i) {
		b[i] = arr[right];
		right = right + 2;
		if (right > n - 2)
			break;
	}
}

void solveOdd(int n, int* arr, int* b)
{
	int left = n - 1;
	for (int i = 0; i < (n / 2) + 1; ++i) {
		b[i] = arr[left];
		left = left - 2;
		if (left < 0)
			break;
	}

	int right = 1;
	for (int i = (n / 2) + 1; i <= n - 1; ++i) {
		b[i] = arr[right];
		right = right + 2;
		if (right > n - 2)
			break;
	}
}
void solve(int n, int* arr)
{

	int b[n];

	if (n % 2 == 0)
		solveEven(n, arr, b);
	else
		solveOdd(n, arr, b);

	for (int i = 0; i <= n - 1; ++i) {
		cout << b[i] << " ";
	}
}

int main()
{
	int n, arr[1000];
	cin >> n;
	for(int i = 0; i < n; i++) {
        cin >> arr[i];
	}

	solve(n, arr);

	return 0;
}
