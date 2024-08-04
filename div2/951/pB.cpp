#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;
const int maxn = 2005;

int dp[maxn][maxn];

void print(vector<int> a) {
    for (auto n: a)
        cout << n << ' ';

    cout << '\n';
}

void solve(){
    int x, y;
    cin >> x >> y;
    memset(dp, 0, sizeof(dp));
    vector<int> a, b;
    int idx = 0;
    while (idx++ != 10) {
        a.push_back(x ^ idx);
        b.push_back(y ^ idx);
        
        // cout << idx << ":\n";
        // print(a);
        // print(b);
        // cout << '\n';
    }

    int ans = 0;
    for (int i = 0; i < sz(a); i++) {
        for (int j = 0; j < sz(b); j++) {
            //cout << a[i] << ' ' << b[i] << '\n';
            if (a[i] == b[j]) {
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1);
            }

            else {
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }

            ans = max(ans, dp[i+1][j+1]);
        }
    }

    cout << ans << '\n';
}

signed main(){
    // Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}