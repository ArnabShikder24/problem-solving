#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    double n;
    cin >> n;

    if(fmod(n, 1.0) == 0)
        cout << "int " << static_cast<int>(n);
    else {
        int intPart = static_cast<int>(n);
        double decimalPart = n - intPart;
        cout << "float " << intPart << " " << decimalPart;
    }

    return 0;
}