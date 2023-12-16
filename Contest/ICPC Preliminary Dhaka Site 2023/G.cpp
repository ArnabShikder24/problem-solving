#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define BOOTS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    BOOTS;
    int n;
    cin >> n;
    while(n--) {
        string s;
        int run = 0, w = 0;
        double over1 = 0.0;
        double over = 0.0;
        cin >> s;
        for(char c:s) {
            if(isdigit(c)) {
                int r = c - '0';
                run += r;
            }
            else if (c == 'W')
            {
                w++;
            }

            over1 += 0.1;
            if(over1 == 0.6) {
                over1 = over1 - 0.6;
                over += 1.0;
            }
        }
        over += over1;
        if(over > 1.0) {
            cout << fixed << setprecision(1) << over << " Overs ";
        }
        else {
            cout << over << " Over ";
        }
        if(run > 1) {
            cout << run << " Runs ";
        }
        else {
            cout << run << " Run ";
        }
        if(w > 1) {
            cout << w << " Wickets." << endl;
        }else {
            cout << w << " Wicket." << endl;
        }
    }
    return 0;
}