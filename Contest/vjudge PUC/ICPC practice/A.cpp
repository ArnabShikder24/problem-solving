#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n], c[n], sumB = 0, sumC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            sumC += a[i];
        else
            sumB += a[i];
    }
    cout << sumB - sumC;
    return 0;
}