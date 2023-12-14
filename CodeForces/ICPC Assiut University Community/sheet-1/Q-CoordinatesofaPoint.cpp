#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    double x, y;
    cin >> x >> y;
    if(x>0 && y>0)
        cout << "Q1";
    else if(x<0 && y>0)
        cout << "Q2";
    else if(x<0 && y<0)
        cout << "Q3";
    else if(x>0 && y<0)
        cout << "Q4";
    else if(x==0 && y==0)
        cout << "Origem";
    else if((x>0 || x<0) && y==0)
        cout << "Eixo X";
    else 
        cout << "Eixo Y";
    return 0;
}