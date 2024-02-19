#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define vt vector
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

// 1 2
// 2 1 1
// 1 1 2
//  
// 4 2
// 2 1 1
// 1 1 2
 
vt<vt<int>> arr;
vt<int> ans;
int m, n;

bool good(int mid){
    int b = 0;
    int time = 0;
    for (auto i: arr){
        if (mid / i[1])
        b += i[1];
        time += i[0]*i[1]+i[2];
    }






}

signed main(){
    cin >> m >> n;

    arr.assign(n, {});
    ans.resize(n);
    for (auto &x: arr){
        x.resize(3);
        for (auto &y: x)
            cin >> y;
    }

    int l = 0, r = 1e14;
    while (l < r){
        int mid = l + (r-l)/2;

    }
    

}