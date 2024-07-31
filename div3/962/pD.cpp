#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; i*j <= n; j++) {
            if (x-i-j <= 0) 
                return;


            int k = x-i-j;
            int l = 1, r = k;
            while (l < r) {
                int mid = (l+r) >> 1;
                if (i*j + mid*i + mid*j <= n) {
                    l = mid;
                }

                else {
                    r = mid+1;
                }
            }

            // int L = l-1, R = r+1;
            // while(R - L > 1){
            //     int mid = (L+R) / 2;
            //     if(ok(mid)) L = mid;
            //     else R = mid;
            // }

        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}