#include <iostream>
using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, result;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> Petya >> Vasya >> Tonya;
        if(Petya+Vasya+Tonya >= 2)
            result++;
    }
    cout << result;
    return 0;
}
