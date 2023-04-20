#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + n, [](int a, int b) {
        if (a < 0 && b < 0) {
            return a > b;
        } else if (a >= 0 && b >= 0) {
            return a < b;
        } else {
            return a < b;
        }
    });

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


// 6
// -3 0 2 -1 1 -2

// -1 -2 -3 0 1 2