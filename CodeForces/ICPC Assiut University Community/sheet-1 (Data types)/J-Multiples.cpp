#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b;
    cin >> a >> b;

    if(a%b == 0 || b%a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";

    return 0;
}