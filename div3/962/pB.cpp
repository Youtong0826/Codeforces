#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e3+1;
char x;
bool mp[maxn][maxn];

void solve() {
    int n, k;
    cin >> n >> k;
    // cout << k << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            int r = i/k, c = j/k;
            cin >> x;
            // cout << i << ' ' << j << ' ' << r << ' ' << c << '\n';
            mp[r][c] = x-'0';
        }
    }
    // cout << n/k << '\n';
    for (int i = 0; i < n/k; i++) {
        for (int j = 0; j < n/k; j++) {
            cout << mp[i][j];
        }
        cout << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}