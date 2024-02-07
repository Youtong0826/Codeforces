#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[50005];


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int p = 0, num = 2, ans = 0;

        while (arr[0] / num){
            num *= 2;
            p++;
        }

        for (int i = 1; i < n; i++){
            int p2 = 0;
            num = 2;
            while (arr[i] / num){
                num *= 2;
                p2++;
            }

            if (arr[i] < arr[i-1]){
                arr[i] <<= p - p2;
                if (arr[i] < arr[i-1]){
                    arr[i] <<= 1;
                    p++;
                }

                ans += p - p2;
            }

            else
                p = p2;
            
            // cout << p << ' ' << p2 << '\n';         
        }
        cout << ans << '\n';
    }
}