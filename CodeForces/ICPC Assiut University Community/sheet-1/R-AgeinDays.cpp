#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long n;
    cin >> n;
    cout << n / 365 << " years" << endl;
    cout << (n % 365)/30 << " months" << endl;
    cout << (n % 365)%30  << " days";
    return 0;
}