#include <bits/stdc++.h>

using namespace std;

int s[60][60], n, k, t;
bool row_s[60][60], col_s[60][60], solved;

void solver(int row, int col, int m) {
    if (row == n && col == n + 1 && m == k && !solved) {
        solved = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << s[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    } else if (row > n) {
        return;
    } else if (col > n) {
        solver(row + 1, 1, m);
    }
    for (int i = 1; i <= n && !solved; ++i) {
        if (!row_s[row][i] && !col_s[col][i]) {
            row_s[row][i] = col_s[col][i] = true;
            if (row == col) {
                m += i;
            }
            s[row][col] = i;

            solver(row, col + 1, m);

            row_s[row][i] = col_s[col][i] = false;
            if (row == col) {
                m -= i;
            }
            s[row][col] = 0;
        }
    }
}

int main() {
    int T;
    scanf(" %d", &T);
    for (t = 1; t <= T; ++t) {
        scanf(" %d %d", &n, &k);
        solver(1, 1, 0);
        if (!solved) {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        solved = false;
    }
    return 0;
}