#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define pq priority_queue
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n, a, sum = 0;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
        sum += a;
    }

    int r = n-1, l = n-2, t = sum/n, fl = 1;
    while (r >= 0){
        if (arr[r] == t){
            r--;
            continue;
        }

        else if (arr[r] > t){
            fl = 0;
            break;
        }

        while (l >= 0 && arr[l] <= t)
            l--;
        
        //cout << arr[l] << ' ' << arr[r] << '\n';
        if (l != -1)
            arr[l] -= t - arr[r];
        
        else{
            fl = 0;
            break;
        }

        r--;
    }

    //for (int i = 0; i < n; i++)
    //    cout << arr[i] << ' ';

    if (fl && arr[0] == t)
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