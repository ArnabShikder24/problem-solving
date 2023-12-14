#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b;
    cin >> a >> b;
    double r = 1.00 * a / b;
    
    cout << "floor " << a << " / " << b << " = " << floor(r) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(r) << endl;
    cout << "round " << a << " / " << b << " = " << round(r);
    return 0;
}