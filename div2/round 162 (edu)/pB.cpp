#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<pii> vt;

// 4 10
// 3 4 2 5 
// -3 -2 1 3
// 7
void solve(){
    int n, k;
    cin >> n >> k;

    vt.resize(n);
    for (auto &[x, y]: vt)
        cin >> y;
    
    for (auto &[x, y]: vt){
        cin >> x;
        x = abs(x);
    }

    sort(all(vt));
    reverse(all(vt));
    int inc = 1;
    while (vt.size()){
        int t = k;// 4 10
        if (vt.back().f == 0){
            cout << "NO\n";
            return;
        }

        if (t < vt.back().s){
            vt.back().f--;
            vt.back().s -= t;
        }
        
        else {
            t -= vt.back().s;
            vt.pop_back();
            while (vt.size() && t > 0){
                int v = vt.back().s;
                vt.back().s -= t;
                t -= v;

                if (vt.back().s <= 0)
                    vt.pop_back();
            }

            if (vt.size())
                vt.back().f -= inc;
        }

        inc++;
    }

    cout << "YES\n";
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}