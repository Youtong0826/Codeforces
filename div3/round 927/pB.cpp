#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n;
    vector<int> v;
    cin >> n;
    v.resize(n);
    for (auto &x: v)
        cin >> x;
        
    for (int i = 1; i < n; i++)
        v[i] *= v[i-1]/v[i] + 1;

    cout << v[n-1] << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}