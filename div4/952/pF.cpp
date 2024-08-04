#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int a, b, c;
int dfs(vector<vector<int>> &g, int idx){
    int t = 0;
    for (auto i: g[idx]){
        t = max(t, dfs(g, i));
    }

    if (g[idx].size() && b){
        
    }

    return t+1;
}

void solve(){
    vector<vector<int>> g;
    cin >> a >> b >> c;

    g.assign(a*2+b, {});
    int k = 1, i = 0;
    for (; i < a; i++){// 0 1 2
        g[i].pb(k++);
        g[i].pb(k++);
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