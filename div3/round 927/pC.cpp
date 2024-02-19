#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, m, a, sum = 1;
    string ss;
    vector<int> t, ans;
    deque<int> arr;
    cin >> n >> m;
    t.resize(n);
    ans.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }

    cin >> ss;
    for (int i = 0; i < n; i++){
        if (ss[i] == 'L'){
            t[i] = arr.front();
            arr.pop_front();
        }

        else{
            t[i] = arr.back();
            arr.pop_back();
        }
    }

    for (int i = n-1; i >= 0; i--){
        sum *= t[i], sum %= m;
        ans[i] = sum;
    }

    for (auto i: ans)
        cout << i << ' ';

    cout << '\n';
}

signed main(){
    Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}