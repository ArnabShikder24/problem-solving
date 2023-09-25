// arnabshikder2001	479A - Expression	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr;
    arr.push_back(a + b * c);
    arr.push_back(a * (b + c));
    arr.push_back(a * b * c);
    arr.push_back((a + b) * c);
    arr.push_back(a + b + c);

    if(!arr.empty()) {
        auto maxElement = max_element(arr.begin(), arr.end());
        int maxValue = *maxElement;
        cout << maxValue;
    }
    return 0;
}