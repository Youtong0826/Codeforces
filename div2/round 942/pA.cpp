#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const int maxn = 100;
int b[maxn];

void solve(){
    int n, ans = 0;
    deque<int> a;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++){
        if (a[i] > b[i]){
            a.pop_back();
            a.push_back(b[i]);
            sort(a.begin(), a.end());
            i = 0;
            ans++;
        }
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