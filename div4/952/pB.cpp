#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, ans = 0, mn = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int sum = 0;
        for (int j = i; j <= n; j += i) {
            sum += j;
        }

        if (sum > mn) {
            mn = sum;
            ans = i;
        }
    }

    cout << ans << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}