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

bool isVowel(char c) {
    return (c == 'a' || c == 'e');
}

int main() {
    BOOST;
    int n;
    cin >> n;
    while(n--) {
        int t;
        cin >> t;
        char s[t];
        FOR(i, 0, t - 1)
            cin >> s[i];
        
        FOR(i, 0, t - 1) {
            if(t % 2 == 0){
                if (!isVowel(s[i]) && isVowel(s[i+1])) {
                    cout << s[i] << s[i + 1] << '.';
                    i++;
                } else if (!isVowel(s[i]) && isVowel(s[i+1]) && !isVowel(s[i+2])) {
                    cout << s[i] << s[i + 1] << s[i + 2] << '.';
                    i += 2;
                } else {
                    cout << s[i];
                }
            }
            else {
                if (!isVowel(s[i]) && isVowel(s[i+1]) && !isVowel(s[i+2])) {
                    cout << s[i] << s[i + 1] << s[i + 2] << '.';
                    i += 2;
                } else if (!isVowel(s[i]) && isVowel(s[i+1])) {
                    cout << s[i] << s[i + 1] << '.';
                    i++;
                } else {
                    cout << s[i];
                }
            }
            
        }
    }
    return 0;
}