#include <bits/stdc++.h>
using namespace std;

multiset<int> R;
multiset<int> L;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q, a, b;
    char c;
    cin >> q;
    while (q--){
        cin >> c >> a >> b;
        if (c == '+'){
            L.insert(a);
            R.insert(b);
        }

        else{
            L.erase(L.find(a));
            R.erase(R.find(b));
        }

        if (!L.size())
            cout << "NO";

        else{
            int ml = *L.rbegin(), mr = *R.begin();

            if (ml > mr)
                cout << "YES";

            else
                cout << "NO";
        }
        cout << '\n';
    }
    
}