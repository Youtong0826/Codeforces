#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

//100
//000
//100

//110
//000
//110

//000
//001
//001

//011
//001
//010

//1001
//0111
//1110

//0110
//0111
//0001

//1001
//0110
//1111
//0001

//
signed main(){
    fastio;
    int t, a, b, r;
    cin >> t;
    while (t--){
        cin >> a >> b >> r;
        int x = 1;
        for (int i = a ^ b; i > 0 && x < r; i >>= 1){
            if (i & 1)
                break;

            x++;
        }
        
        cout << abs((a ^ x) - (b ^ x)) << '\n';
    }
}