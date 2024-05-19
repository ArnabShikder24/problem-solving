#include <iostream>
#include <vector>
using namespace std;

int countDivisionsByTwo(long long x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<long long> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int maxCount = 0;
    for (int i = 0; i < N; i++) {
        int currentCount = countDivisionsByTwo(numbers[i]);
        if (currentCount > maxCount) {
            maxCount = currentCount;
        }
    }

    cout << maxCount << endl;

    return 0;
}
