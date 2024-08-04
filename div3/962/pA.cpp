#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;;
    cin >> n;

    ans += n/4;
    n %= 4;
    ans += n/2;

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}