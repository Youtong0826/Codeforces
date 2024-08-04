#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define pb(x) emplace_back(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define Youtong              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
using namespace std;

void solve()
{
    int n, k, mod = 1e9 + 7;
    vector<int> arr, dp;
    cin >> n >> k;
    arr.resize(n);
    dp.resize(n + 1);

    for (auto &x : arr)
        cin >> x;

    sort(all(arr));
    while (k--)
    {
        dp.assign(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 1] + arr[i]);
        }

        arr.push_back(dp[n]);
    }

    int sum = 0;
    for (auto i : arr)
        sum += i;

    cout << sum << '\n';
    if (sum < 0)
    {
        int t = sum / mod;
        cout << t << '\n';
        if (sum % mod != 0)
            t--;

        sum -= (t * mod);
    }
    else
        sum %= mod;

    cout << sum << '\n';
}

signed main()
{
    Youtong;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
