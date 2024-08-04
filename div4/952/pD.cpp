#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const int maxn = 2e5+1;
char c;
int n, m, x, y, sum;

void solve(){
    cin >> n >> m;
    x = y = sum = 0;
    for (int i = 1; i <= n; i++) {
        int s = 0, k = 0;
        for (int j = 1; j <= m; j++){
            cin >> c;
            if (c == '#') {
                if (!k) {
                    k = j;
                }

                s++;
            }
        }

        if (s > sum) {
            sum = s, x = i, y = k;
        }
    }

    cout << x << ' ' << y+(sum/2) << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}