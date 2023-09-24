// arnabshikder2001	580A - Kefa and First Steps	GNU C++20 (64)	Accepted	31 ms	1400 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int segment = 1;
    vector<int> brr;
    if(n==1) {
        brr.push_back(segment);
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if(arr[i] <= arr[i + 1]) {
            segment++;
        }
        else {
            brr.push_back(segment);
            segment = 1;
        }
        if(i + 1 == n - 1) {
            brr.push_back(segment);
        }
    }

    if(!brr.empty()) {
        auto maxElement = max_element(brr.begin(), brr.end());
        int maxValue = *maxElement;
        cout << maxValue;
    }

    return 0;
}