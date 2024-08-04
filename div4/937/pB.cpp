#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, t = 0;
    cin >> n;
    for (int i = 0; i < n*2; i++){
        for (int j = 0; j < n*2; j++){
            if (j % 2 == 0)
                t = !t;

            if (t)
                cout << '#';

            else 
                cout << '.';
        }
        if ((n & 1 && i % 2 == 0) || (!(n & 1) && i % 2))
            t = !t;

        cout << '\n';
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