#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define pq priority_queue
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

//a + b div by 5 
//(a mod 5 + b mod 5) div by 5
//5 - a mod 5 = b mod 5;
//(a mod 2 - b mod 2) div by 2
//2 + b mod 2 = a mod 2
// 1 2 7 4 9 6;
//6 5 2
//1 2 7 4 9 6
//4 1
//

void solve(){
    int n, x, y, a, ans = 0;
    map<pii, int> mpX;
    cin >> n >> x >> y;

    for (int i = 0; i < n; i++){
        cin >> a;
        auto it = mpX.lower_bound({(x - a % x) % x, (a % y + y) % y});
        if (it != mpX.end() && it->f.f == (x - a % x) % x && (it->f.s == (a % y + y) % y)){
            ans += it->s;
        }

        mpX[{a % x, a % y}]++;
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