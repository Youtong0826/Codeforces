#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5+1;
int pre[27][maxn], pre2[27][maxn];

void solve() {
    int n, q, l, r;
    string s1, s2;
    cin >> n >> q;
    cin >> s1 >> s2;

    for (int i = 0; i < 27; i++) {
        for (int j = 1; j <= s1.size(); j++) {
            pre[i][j] = pre[i][j-1];
            if (s1[j-1]-'a' == i) {
                pre[i][j]++;
            }
        }
    }

    for (int i = 0; i < 27; i++) {
        for (int j = 1; j <= s2.size(); j++) {
            pre2[i][j] = pre2[i][j-1];
            if (s2[j-1]-'a' == i) {
                pre2[i][j]++;
            }
        }
    }

    while (q--) {
        cin >> l >> r;
        int ans = 0;
        // for (int i = 0; i < 5; i++) {
        //     cout << "l: " <<  l << " r: " << r << '\n'; 
        //     cout << "s1: " << pre[i][r] - pre[i][l-1] << '\n';
        //     cout << "s2: " << pre2[i][r] - pre[i][l-1] << '\n';
        //     cout << '\n';
        // }
        for (int i = 0; i < 27; i++) {
            ans += abs((pre[i][r] - pre[i][l-1]) - (pre2[i][r] - pre2[i][l-1]));
        }
        cout << ans/2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}