#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define pq priority_queue
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n;
    vector<int> arr;
    cin >> n;

    arr.resize(n);
    for (auto &x: arr)
        cin >> x;

    if (n == 1){
        cout << 0 << '\n';
        return;
    }

    int l = 1, r = 1, last = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] == last)
            l++;

        else
            break;

        last = arr[i];
    }

    last = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        if (arr[i] == last)
            r++;

        else
            break;

        last = arr[i];
    }

    if (arr[0] == arr[n-1] && (l <= n/2 || r <= n/2))
        cout << n-(l+r) << '\n';

    else
        cout << n-max(l, r) << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}