#include <bits/stdc++.h>
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve(){
    int n, m, k;
    string s;
    set<int> st, wt;
    cin >> n >> m >> k;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'L')
            st.insert(i+1);

        else if (s[i] == 'W')
            wt.insert(i+1);
    }

    st.insert(n+1);

    int l = 0;
    while (l != n+1) {
        cout << l << ' ' << ((l >= 1 && l <= n)? s[l-1]:' ') << ' ';
        if (m < 0) {
            cout << "NO\n";
            return;
        }

        if (l == 0 || s[l-1] == 'L') {
            if (k == 0) {
                l++;
                continue;
            }

            auto it = st.lower_bound(l+k);
            if (it == st.begin() && *it != l+k) {
                l++;
                continue;
            }


            if (*it == l+k) {
                l = *it;
                cout << "L1: " << *it << '\n';
            }
            else if (it != st.begin()){
                it = prev(it, 1);
                if (*it > l)
                    l = *it;
                cout << "L2: " << *it << '\n';
            }
            
            else {
                auto it = wt.lower_bound(l+k);
                if (it == st.begin() && *it != l+k) {
                    l++;
                    continue;
                }
                
                if (*it == l+k) {
                    l = *it;
                    cout << "W1: " << *it << '\n';
                }
                else if (it != st.begin() && *prev(it, 1) > l){
                    it = prev(it, 1);
                    l = *it;
                    cout << "W2: " << *it << '\n';
                }
                else {
                    l++;
                }
            }
        }

        else if (s[l-1] == 'W') {
            m--;
            l++;
        }

        else {
            cout << "NO\n";
            return;
        }

    }

    cout << "Yes" << '\n';
}

signed main(){
    // Youtong;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}