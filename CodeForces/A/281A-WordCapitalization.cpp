// arnabshikder2001	281A - Word Capitalization	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s[0] >= 97 && s[0] <= 122) {
      int charNum = s[0];
      char covertUp = charNum - 32;
      s[0] = covertUp;
    }    
    cout << s;
    return 0;
}
