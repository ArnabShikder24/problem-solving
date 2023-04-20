#include <iostream>
using namespace std;

int n,t;
int f[200010];
long long ans;

int main()
{

	cin >> n>> t;

	for (int i=1;i<=n;i++){
        cin >> f[i];
    }
	for (int i=1;i<n;i++){
        ans += min(f[i+1]-f[i],t);
	}
	cout << ans+t << endl;
}
