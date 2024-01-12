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

LL gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

LL lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    BOOST;
    int n;
    cin >> n;
    while (n--)
    {
        LL a, b;
        cin >> a >> b;
        if((gcd(a, b) + lcm(a, b)) == (a + b)) {
            PRINT("true");
        }
        else {
            PRINT("false");
        }
    }
    
    return 0;
}