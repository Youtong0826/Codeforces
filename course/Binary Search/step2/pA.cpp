#include <bits/stdc++.h>
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

signed main(){
    Youtong;
    int w, h, n;
    cin >> w >> h >> n;

    int l = 1, t = -1;
    while (t < n){
        l <<= 1;
    }
    
    l++;

    cout << l;
}