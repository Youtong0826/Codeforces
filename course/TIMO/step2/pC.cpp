#include <bits/stdc++.h>
#define int long long
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;
//4 1 1
//1 1 1
//  1 1

//5 1 2
//1 1 1 1
//    1

//10 2 3
//1 2 3 4 5 6 7 8 9 10 11 12 13 14
//  1   1   1   1    1     1     1
//        1     1       1        1

signed main(){
    int n, x, y;
    cin >> n >> x >> y;

    n--;
    int l = 0, r = 1e15;
    while (l < r){
        int mid = l + (r-l)/2;
        //cout << l << ' ' << r << ' ' << mid << '\n';
        if (mid/x + mid/y >= n)
            r = mid;

        else
            l = mid+1;
    }

    cout << r+min(x, y);
}
