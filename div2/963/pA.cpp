#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int count[5] = {0, 0, 0, 0, 0}, sum = 0;

        for (auto c : s) {
            if (c == '?') continue;
            if (count[c-'A'] < n) 
                sum++;
            count[c-'A']++;
        }
        cout << sum << '\n';
    }
}
