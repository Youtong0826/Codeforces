#include <bits/stdc++.h>
using namespace std;

int arr[200005], n, k, d;
void solve(){
    cin >> d;
    if (binary_search(arr, arr+n, d))
        cout << "YES\n";

    else
        cout << "NO\n";
}

int main(){
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (k--){
        solve();
    }
    
}