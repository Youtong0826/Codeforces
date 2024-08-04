#include <bits/stdc++.h>
#define pii pair<int,int>
#define int long long
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a, b, d;
    for (int i = 1; i <= n; i++) {
        if (i >= k) 
            a.push_back(i);

        else if (i <= m)
            b.push_back(i);

        else
            d.push_back(i);
    }

    sort(all(a), greater<int>());
    sort(all(b));

    for (auto x: a)
        cout << x << ' ';

    for (auto x: d)
        cout << x << ' ';

    for (auto x: b)
        cout << x << ' ';

    cout << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
// 5 3 4 1 2
// f(1) = 
// 5 4 3 2 1
// 5 0
// 5 0
// 5 0
// 5 2
// 5 3