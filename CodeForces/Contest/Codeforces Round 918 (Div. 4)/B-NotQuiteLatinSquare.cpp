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

int main() {
    BOOST;
    int n;
    cin >> n;
    while(n--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int a = 0, b = 0, c = 0;
        if (s1.find('?') != string::npos) {
            for(char i: s1) {
                if(i == 'A') {
                    a = 1;
                }
                else if(i == 'B') {
                    b = 1;
                }
                else if(i == 'C') {
                    c = 1;
                }
            }
        } else if (s2.find('?') != string::npos) {
            for(char i: s2) {
                if(i == 'A') {
                    a = 1;
                }
                else if(i == 'B') {
                    b = 1;
                }
                else if(i == 'C') {
                    c = 1;
                }
            }
        } else {
            for(char i: s3) {
                if(i == 'A') {
                    a = 1;
                }
                else if(i == 'B') {
                    b = 1;
                }
                else if(i == 'C') {
                    c = 1;
                }
            }
        }

        if(a == 0) {
            PRINT('A');
        }
        if(b == 0) {
            PRINT('B');
        }
        if(c == 0) {
            PRINT('C');
        }

    }
    return 0;
}