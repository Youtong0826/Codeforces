#include <bits/stdc++.h>
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n;
    string ss;
    cin >> n;

    if (n >= 53){
        ss += "zz";
        ss += 'a' + n-53;
    }

    else if (n >= 28){
        ss += 'z';
        ss += 'a' + n-28;
        ss += 'a';
    }

    else{
        ss += 'a'+n-3;
        ss += "aa";
    }

    sort(ss.begin(), ss.end());
    cout << ss << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}