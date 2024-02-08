#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define int long long
#define Youtong ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;
 
pii arr[200005];
bool cmp(pii x, pii y){
    return y.f - y.s <= x.f - x.s;
}

signed main(){
    Youtong;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i].f >> arr[i].s;
 
    int ans = 0;
    sort(arr+1, arr+n+1, cmp);
    for (int i = 1; i <= n; i++){
        //cout << arr[i].f << ' ' << arr[i].s << '\n';
        ans += arr[i].f * (i - 1) + arr[i].s * (n - i);
    }
 
    cout << ans;
}

// ai * (j - 1) + bi * (n - j)
// aij - ai + bi * n - bi * j
// ai * j - bi * j - ai + bi * n
// (ai - bi) * j - ai + bi * n