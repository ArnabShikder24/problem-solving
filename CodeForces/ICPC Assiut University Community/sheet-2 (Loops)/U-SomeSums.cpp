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

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    BOOST;
    int N, A, B;
    cin >> N >> A >> B;
    int result = 0;
    for (int i = 1; i <= N; ++i) {
        int sumOfDigits = digitSum(i);
        if (sumOfDigits >= A && sumOfDigits <= B) {
            result += i;
        }
    }
    PRINT(result);
    return 0;
}
