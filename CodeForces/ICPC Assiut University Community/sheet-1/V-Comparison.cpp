#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    int a, c;
    char b;
    cin >> a >> b >> c;
    if((a > c && b == '>') || (a < c  && b == '<') || (a == c && b == '='))
        cout << "Right";
    else
        cout << "Wrong";

    return 0;
}