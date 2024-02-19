#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n;
    char c;
    cin >> n >> c;
    vector<pair<char, int>> v;
    v.resize(n*2);
    for (auto &[x, y]: v)
        cin >> y >> x;

    sort(v.begin(), v.end());
    for (int i = 1; i < n*2; i+=2){
        //cout << v[i].s << v[i].f << ' ' << v[i-1].s << v[i-1].f << '\n';
        if (v[i].f != c && v[i-1].f != c && v[i].f != v[i-1].f){
            cout << "IMPOSSIBLE" << '\n';
            return;
        }

        if (v[i-1].f == c && v[i].f != v[i-1].f)
            cout << v[i].s << v[i].f << ' ' << v[i-1].s << v[i-1].f << '\n';

        else
            cout << v[i-1].s << v[i-1].f << ' ' << v[i].s << v[i].f << '\n';
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