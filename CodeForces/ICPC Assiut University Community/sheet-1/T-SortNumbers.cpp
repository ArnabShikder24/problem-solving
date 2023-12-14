#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    for(int i : arr)
        cout << i << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}