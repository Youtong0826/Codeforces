#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n, ans = 0;
    string ss;
    cin >> n >> ss;

    for (int i = 0; i < n; i++){
        if (ss[i] == '.')
            continue;

        if (ss[i] == '@')
            ans++;
        
        else if (ss[i+1] != '*')
            continue;

        else
            break;
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