#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int a, b, c;
    priority_queue<int, vector<int>, greater<int>> s;
    cin >> a >> b >> c;
    s.push(a);
    s.push(b);
    s.push(c);

    for (int i = 0; i < 5; i++){
        int t = s.top();
        s.pop();
        s.push(++t);
    }

    int ans = 1;
    while (s.size())
    {
        ans *= s.top();
        s.pop();
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