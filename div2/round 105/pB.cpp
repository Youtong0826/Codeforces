#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
//#define int long long
#define Youtong ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;

    for (int i = 0; i < 16; i++){
        int du = u, dr = r, dd = d, dl = l;
        if (i & 1)
            dr--, dd--;

        if (i & 2)
            dl--, dd--;

        if (i & 4)
            dr--, du--;

        if (i & 8)
            dl--, du--;

        //cout << du << ' ' << dr << ' ' << dd << ' ' << dl << '\n';

        if (min(du, min(dr, min(dd, dl))) >= 0 && max(du, max(dr, max(dd, dl))) <= n-2){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

signed main(){
    Youtong;
    int T;
    cin >> T;
    while (T--){
        solve();
    }
    
}