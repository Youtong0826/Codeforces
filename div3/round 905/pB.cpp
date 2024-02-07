#include <bits/stdc++.h>
using namespace std;

set<char> nums;

int main(){
    int t, n, k;
    string s;
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> k >> s;
        int cas = 0;
        nums.clear();
        for (int i = 0; i < n; i++){
            if (nums.find(s[i]) != nums.end()){
                cas++;
                nums.erase(s[i]);
            }
            else 
                nums.insert(s[i]);
        }

        if (n - cas*2 - k <= 1)
            cout << "YES";
        else
            cout << "NO";

        cout << '\n';
    }
}