#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

const int maxn = 2e5+5;
void solve(){
    int n, k, arr[maxn];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int ans = INT64_MIN;
    for (int i = max(1LL, n-200); i <= n; i++)
        for (int j = i+1; j <= n; j++)
            ans = max(ans, i*j-k*(arr[i]|arr[j]));
        
    cout << ans << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while (t--)
        solve();
}