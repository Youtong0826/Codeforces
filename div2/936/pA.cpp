#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n;
    vector<int> arr;
    cin >> n;
    arr.resize(n);
    for (auto &x: arr)
        cin >> x;

    sort(all(arr));
    int mid = (n & 1)? n/2: n/2-1;
    int ans = 0;
    for (int i = mid; i < n && arr[i] == arr[mid]; i++){
        ans++;
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
