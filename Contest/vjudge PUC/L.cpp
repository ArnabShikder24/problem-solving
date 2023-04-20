
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <iomanip>
#define ALL(x) (x).begin(), (x).end()
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define rep(i,x,n) for(int i=x;i<n;i++)
#define repd(i,x,n) for(int i=x;i<=n;i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define gbtb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MSC0(X) memset((X), '\0', sizeof((X)))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eps 1e-6
#define gg(x) getInt(&x)
#define chu(x) cout<<"["<<#x<<" "<<(x)<<"]"<<endl
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll powmod(ll a, ll b, ll MOD) {ll ans = 1; while (b) {if (b % 2) { ans = ans * a % MOD; } a = a * a % MOD; b /= 2;} return ans;}
inline void getInt(int *p);
const int maxn = 1000010;
const int inf = 0x3f3f3f3f;
/*** TEMPLATE CODE * * STARTS HERE ***/
typedef long double ld;
ld w, h, a;
const ld pi = acos(-1);
int main()
{
    //freopen("D:\\code\\text\\input.txt","r",stdin);
    //freopen("D:\\code\\text\\output.txt","w",stdout);
    cin >> w >> h >> a;
    if (h > w) {
        swap(h, w);
    }
    a = min(a, 180.0 - a);
    a /= 180;
    a *= pi;
    ld z = (w - (h * sin(a)) / (1.0 + cos(a))) / (1.0 + cos(a) - sin(a) * sin(a) / (1 + cos(a)));
    ld v = (h - z * sin(a)) / (1.0 + cos(a));
    if (v > 0.0) {
        ld x = z * cos(a);
        ld y = z * sin(a);
        ld ans = w * h;
        ans -= x * y;
        x = v * cos(a);
        y = v * sin(a);
        ans -= x * y;
        cout << fixed << setprecision(7) << ans << endl;
    } else {
        v = h / sin(a);
        ld x = v * cos(a / 2.0);
        ld y = v * sin(a / 2.0);
        ld ans = x * y * 2.0;
        cout << fixed << setprecision(7) << ans << endl;
    }

    return 0;
}

inline void getInt(int *p)
{
    char ch;
    do {
        ch = getchar();
    } while (ch == ' ' || ch == '\n');
    if (ch == '-') {
        *p = -(getchar() - '0');
        while ((ch = getchar()) >= '0' && ch <= '9') {
            *p = *p * 10 - ch + '0';
        }
    } else {
        *p = ch - '0';
        while ((ch = getchar()) >= '0' && ch <= '9') {
            *p = *p * 10 + ch - '0';
        }
    }
}
