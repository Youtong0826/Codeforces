#include <bits/stdc++.h>
#define db double
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

db arr[200005];

signed main(){
    Youtong;
    db n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    
    db l = 0, r = 1e18;
    for (int _ = 0; _ < 100; _++){
        db mid = l + (r-l)/2;
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i]/mid;
        
        if (sum >= k)
            l = mid;
        
        else
            r = mid;
    }

    cout << setprecision(7) << l;
}