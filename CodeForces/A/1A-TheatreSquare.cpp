// 1A - Theatre Square	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, m, a, total;
    double w, h;
    cin >> n >> m >> a;

    w = ceil((double) n / (double) a);
    h = ceil((double) m / (double) a);

    total = w * h;

    cout << total << endl;
    return 0;
}
