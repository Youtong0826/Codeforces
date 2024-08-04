#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    set<int> st;

    for (auto &e: v)
        cin >> e;

    int k = 0, ans = 0;

    if (sz(v) && v[0] == 0)
        ans++;

    k += v[0];
    st.insert(v[0]);
    for (int i = 1; i < sz(v); i++) {
        k += v[i];
        st.insert(v[i]);
        if (k & 1)
            continue;

        auto it = st.find(k/2);
        if (it != st.end() && *it == k/2)
            ans++;
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