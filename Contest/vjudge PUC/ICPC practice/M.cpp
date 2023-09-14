#include <bits/stdc++.h>
using namespace std;

bool checkGrid(char grid[100][100], int n) {
    for (int i = 0; i < n; i++) {
        int black = 0;
        int white = 0;
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'B') {
                black++;
            } else {
                white++;
            }
        }
        if (black != white) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        int black = 0;
        int white = 0;
        for (int i = 0; i < n; i++) {
            if (grid[i][j] == 'B') {
                black++;
            } else {
                white++;
            }
        }
        if (black != white) {
            return false;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - 2 && grid[i][j] == grid[i][j + 1] && grid[i][j] == grid[i][j + 2]) {
                return false;
            }

            if (i < n - 2 && grid[i][j] == grid[i + 1][j] && grid[i][j] == grid[i + 2][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    char grid[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    if (checkGrid(grid, n)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
