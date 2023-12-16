#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long interLeft = max(l1, l2);
    long long interRight = min(r1, r2);

    if(interLeft <= interRight)
        cout << interLeft << " " << interRight;
    else
        cout << -1;

    return 0;
}