#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

const int maxn = 2e5+5;
vector<pii> nums;

int main(){
    fastio;
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        nums.resize(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i].f;

        for (int i = 0; i < n; i++)
            cin >> nums[i].s;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
            cout << nums[i].f << ' ';

        cout << '\n';

        for (int i = 0; i < n; i++)
            cout << nums[i].s << ' ';

        cout << '\n';
    }
}