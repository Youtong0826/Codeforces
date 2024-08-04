#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, k, x, mx = 0, count = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> x;
        count += x*2-1;
        mx = max(mx, x);
    }

    cout << count-mx*2+1 << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}