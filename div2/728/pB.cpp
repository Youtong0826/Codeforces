#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n;
    vector<int> v(n);
    for (auto &x: v)
        cin >> x;

    for (int i = 0; i < n; i++){
        for (int j = i; j < 2*n/v[i]; j++);
    }
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}