#include <bits/stdc++.h>
using namespace std;

char mp[3][3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, fx;

    cin >> t;
    while (t--){
        string a = "ABC";

        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> mp[i][j];
                if (mp[i][j] == '?'){
                    fx = i;
                }
            }
        }

        for (int j = 0; j < 3; j++)
            a.erase(remove(a.begin(), a.end(), mp[fx][j]), a.end());
        
        cout << a << '\n';
    }
    
}