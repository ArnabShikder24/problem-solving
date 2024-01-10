#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define LL long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define RFOR(i, a, b) for(int i = a; i >= b; --i)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PRINT(x) cout << x << endl;
#define FMT(x) fixed << setprecision(x)

int fibo(int n) {
    if(n <= 1)
        return 0;
    if(n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    BOOST;
    int n;
    cin >> n;
    fibo(n);
    FOR(i, 1, n) {
        cout << fibo(i) << " ";
    }
    return 0;
}