#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define pq priority_queue
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

const int maxn = 1e12+5;
set<int> cubes;

void init(){
    for (int i = 1; i*i*i <= maxn; i++)
        cubes.insert(i*i*i);
}

void solve(){
    int x;
    cin >> x;
    for (int i = 1; i*i*i <= x; i++){
        auto it = cubes.lower_bound(x-(i*i*i));
        if(it != cubes.end() && *it == x-(i*i*i)){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    init();
    while(t--){
        solve();
    }
}