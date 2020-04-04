

#include <bits/stdc++.h>

using namespace std;

int ls[100][100], n, k, t;
bool rt[100][100], ct[100][100], built;

void builder(int r, int c, int m) {
    if (r == n+1 && c == n && m == k && !built) {
       built = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << ls[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    } else if (r-n>0) {
    builder(1,c+1,m);
        
    } else if (c-n>0) {
        return;
    }
    for (int i = n; i >= 1 && !built; --i) {
        if (!rt[r][i] && !ct[c][i]) {
            rt[r][i] = ct[c][i] = true;
            if (r == c) {
                m += i;
            }
            ls[r][c] = i;

            builder(r+1, c, m);

            
            if (r == c) {
                m -= i;
            }
            ls[r][c] = 0;
        rt[r][i] = ct[c][i] = false;
        }
    }
}

int main() {
    int T;
    scanf(" %d", &T);
    for (t = 1; t <= T; ++t) {
        built = false;
        scanf(" %d %d", &n, &k);
        builder(1, 1, 0);
        if (!built) {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        
    }
    return 0;
}
