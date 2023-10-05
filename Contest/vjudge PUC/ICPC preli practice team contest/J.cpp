#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    long long calc = 1, s = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        calc *= a;
    }

    for (int i = 2; i <= calc; i++) {
        if(calc % i == 0) {
            s *= i;
        }
    }

    cout << s;

    return 0;
}