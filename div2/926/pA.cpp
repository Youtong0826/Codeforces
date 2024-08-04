#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n, ans = 0;
    vector<int> v;
    cin >> n;
    v.resize(n);
    for (auto &x: v)
        cin >> x;

    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
        ans += v[i] - v[i-1];

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