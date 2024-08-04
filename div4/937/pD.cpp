#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
// 1
// 10
// 11
// 100
// 101
// 110
// 111
// 1000
// 1001
// 1010
// 
void solve(){
    int n;
    cin >> n;

    bool f = 1;
    for (auto x: to_string(n)){
        if (x != '0' && x != '1'){
            f = 0;
        }
    }

    if (f){
        cout << "YES\n";
        return;
    }

    for (int i = 1; i <= n;){
        // cout << i << ' ';
        if (n % i == 0){
            n /= i;
            i = 1;
        }

        f = 1;
        for (auto x: to_string(i)){
            if (x == '0'){
                f = 0;
                break;
            }
        }

        if (f){
            int t = 1;
            while (t <= i){
                t *= 10;
            }

            i = t;
        }

        else {
            auto t = to_string(i);
            for (int k = t.size()-1; k >= 0; k--){
                if (t[k] == '0'){
                    t[k] = '1';
                    break;
                }

                else{
                    t[k] = '0';
                    while(t[k-1] == '1'){
                        t[k-1] = '0';
                        k--;
                    }
                        
                    t[k-1] = '1';
                    break;
                }
            }

            i = stoi(t);
        }
    }
    // cout << n << '\n';

    if (n == 1)
        cout << "YES\n";
        
    else
        cout << "NO\n";
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}