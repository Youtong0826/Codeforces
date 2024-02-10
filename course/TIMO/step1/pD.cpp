#include <bits/stdc++.h>
#define Youtong ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

int arr[200005], n, k, a, b;
void solve(){
    cin >> a >> b;
    auto f = lower_bound(arr, arr+n, a);
    auto s = lower_bound(arr, arr+n, b);

    while (s+1 != arr+n && *(s+1) == b)
        s++;
    
    if (*s != b)
        cout << s-f << ' ';
    
    else
        cout << s-f+1 << ' ';
}

int main(){
    Youtong;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    cin >> k;
    while (k--)
        solve();
}