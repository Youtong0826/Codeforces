#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n, k, a;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int ans = INT_MAX, c = 0;
        for (int i = 0; i < n; i++){
            cin >> a;
            if (a % k == 0)
                ans = 0;
            
            if (a % 2 == 0)
                c++;

            ans = min(ans, k - (a % k));
        }     

        if (k == 4)
            ans = min(ans, max(0, 2-c));
        
        cout << ans << '\n';
    }
}