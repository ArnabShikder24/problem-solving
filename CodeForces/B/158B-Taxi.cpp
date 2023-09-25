#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool compareDescending(int a, int b) {
    return a > b;
}

int main() {
    BOOST;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n, compareDescending);

    int grp4 = 0;
    int grp3 = 0;
    int grp2 = 0;
    int grp1 = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] == 4) {
            grp4++;
        }
        else if(arr[i] == 3) {
            grp3++;
        }
        else if(arr[i] == 2) {
            grp2++;
        }
        else {
            grp1++;
        }
        if(grp3 > 0 && grp1 > 0) {
            grp4++;
            grp3--;
            grp1--;
        }
        if(grp2 > 0 && grp1 > 0) {
            grp3++;
            grp2--;
            grp1--;
        }
        if(grp1 == 4) {
            grp4++;
            grp1--;
            grp1--;
            grp1--;
            grp1--;
        }
        if(grp1 == 3) {
            grp3++;
            grp1--;
            grp1--;
            grp1--;
        }
        if(grp1 == 2) {
            grp2++;
            grp1--;
            grp1--;
        }
        if(grp2 == 2) {
            grp4++;
            grp2--;
            grp2--;
        }
    }

    cout << grp4 + grp3 + grp2 + grp1;

    return 0;
}