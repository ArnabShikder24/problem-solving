#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define BOOTS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    BOOTS;
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++) cin >> arr[j];
        ll notB = 0;
        ll a = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                a++;
            } else {
                notB += (a * (a + 1)) / 2;
                a = 1;
            }
        }

        notB += (a * (a + 1)) / 2;

        cout << "Case " << i << ": " << (n * (n + 1) / 2) - notB << endl;
    }

    return 0;
}