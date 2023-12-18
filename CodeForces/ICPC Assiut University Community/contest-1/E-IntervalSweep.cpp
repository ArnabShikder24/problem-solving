#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define LL long long
#define YES cout << "YES\n";
#define NO cout << "NO\n";

int main() {
    BOOST;
    LL a, b;
    cin >> a >> b;

    if ((a-b == 1 || b-a == 1) || (a==b && a!=0 && b != 0)){
        YES;
    } else{
        NO;
    }
        
    return 0;
}
