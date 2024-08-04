#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;

    if (b % 2 == 1 || (b % 2 == 0 && a*4-2 == b))
        cout << b/2+1;

    else
        cout << b/2;

    cout << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
