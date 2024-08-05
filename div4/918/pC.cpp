#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        int sum = 0, a;
        cin >> n;
        while (n--){
            cin >> a;
            sum += a;
        }
        auto te = sqrt(sum);
        if (te == (int)te)
            cout << "YES";
        else
            cout << "NO";
        
        cout << '\n';
    }
}