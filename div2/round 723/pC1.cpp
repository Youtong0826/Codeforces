#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define pb(x) emplace_back(x)
#define sz(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


int arr[1001], dp[1001][1001];
//6
//4 -4 1 -3 1 -3

//dp[i][k] 考慮前i個拿多少pos時的最大生命數

signed main(){
    Youtong;
    int n, t = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];



    cout << t;
}