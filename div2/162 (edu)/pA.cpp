#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, a, t = 0;
    vector<int> arr;
    cin >> n;

     for (int i = 0; i < n; i++){
        cin >> a;
        arr.pb(a);
    }

    int r, l;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            l = i;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--){
        if (arr[i] == 1){
            r = i;
            break;
        }
    }

    for (int i = l; i < r; i++){
        if (arr[i] == 0)
            t++;
    }

    cout << t << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}