#include <bits/stdc++.h>
using namespace std;

int arr[200005], n, k, d;
void solve(){
    cin >> d;
    auto it = upper_bound(arr, arr+n, d);
    if (it != arr)
        cout << it-arr << '\n';

    else
        cout << "0\n";
}

int main(){
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (k--){
        solve();
    }
    
}