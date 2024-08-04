#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<char> c;
string ans;

char flip(int idx){
    return c[idx] = ((c[idx] == 'U')? 'D': 'U');
}

void solve(){
    int n, k;
    for (int i = 0; i < n; i++){
        cin >> c[i];
        if (c[i] == 'U')
            k = i;
    }
    set<int> idx;
    int size = n, ch = 0, first, last = n-1;
    while (size){
        if (k == 0){
            c[k] = -1;
            flip(k+1);
            flip(last);
        }

        else {
            flip
        }
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