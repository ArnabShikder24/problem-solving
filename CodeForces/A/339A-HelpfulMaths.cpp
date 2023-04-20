// arnabshikder2001	339A - Helpful Maths	GNU C++20 (64)	Accepted	0 ms	0 KB
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if(s[i] != '+') {

            for(int j = i + 2; j < len; j++) {

                if(s[j] != '+')
                {
                    if(s[i] > s[j]) {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }

                }
            
            }
        }
    }
    cout << s;
    return 0;
}
