// 158A - Next Round GNU C++20 (64)	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main()
{
    int n, k, arr[50], p = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int kth = arr[k - 1];

    for(int i = 0; i < n; i++) {
        if(arr[i] >= kth && arr[i] > 0)
            p++;
    }

    cout << p;
    return 0;
}
