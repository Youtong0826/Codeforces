#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    string s;
    cin >> s;

    int hour = (s[0]-'0')*10 + (s[1]-'0');
    int minute = (s[3]-'0')*10 + (s[4]-'0');
    
    if (hour == 0)
        cout << 12 << s.substr(2) << " AM\n";

    else if (hour <= 11)
        cout << s << " AM\n";
    
    else if (hour == 12)
        cout << s << " PM\n";

    else {
        
        if (hour - 12 < 10)
            cout << '0';

        cout << hour - 12 << s.substr(2) << " PM\n";
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