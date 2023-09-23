// arnabshikder2001	230A - Dragons	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, n, count = 0;
    cin >> s >> n;
    pair<int, int> a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if(s <= a[i].first) {
            count++;
            break;
        }
        else {
            s += a[i].second;
        }
    }

    if(count > 0) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }

}