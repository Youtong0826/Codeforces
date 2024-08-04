#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

vector<string> v;

void solve(){
    int n, m, sum = 0;
    vector<int> an;
    string x;
    cin >> n >> m;
    v.resize(n);
    while (n--){
        cin >> x;
        int t = 0;
        for (int i = x.size()-1; i >= 0 && x[i] == '0'; i--){
            t++;
        }
        an.push_back(t);
        sum += x.size();
    }// 1 10 10 10
    // 1 10 1010
    //1 1 1010
    //1 10101
    //110101

    sort(all(an));
    reverse(all(an));

    for (int i = 0; i < sz(an); i += 2)
        sum -= an[i];
    
    if (sum > m)
        cout << "Sasha";
    else
        cout << "Anna";

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