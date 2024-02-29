#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
//1 2 3 4 5
//5 4 2 1 3

//1 2 3 4
//4 3 2 1

//1 2 3
//3 1 2

//1 2
//2 1

//1 1 2 4
//2 3 1 1

// 1 1 1 2 3
// 2 3 1 1 1


// 1 1 1 1 2 3 4 5
///2 3 4 5 1 1 1 1

vector<int> v;

void solve(){
    int n, q;
    cin >> n >> q;
    v.resize(n+1);

    for (int i = 0; i <= n; i++){
        cin >> v[i];
    }

    int l, r;
    set<int> st;
    while (q--){
        cin >> l >> r;
        
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