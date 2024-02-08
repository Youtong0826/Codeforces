#include <bits/stdc++.h>
#define Youtong ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

bool is_R(char x){
    return x == '<' || x == '{' || x == '[' || x == '(';
}

// bool is_L(char x){
//     return x == '>' || x == '}' || x == ']' || x == ')';
// }

char conv(char x){
    map<char, char> mp;
    mp['<'] = '>';
    mp['{'] = '}';
    mp['('] = ')';
    mp['['] = ']';

    return mp[x];
}

stack<char> st;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for (auto x: s){
        if (is_R(x))
            st.push(x);

        else{
            if (!st.empty() && is_R(st.top())){
                if (conv(st.top()) == x)
                    st.pop();
                
                else{
                    st.pop();
                    ans++;
                }
            }

            else
                st.push(x);
        }
    }

    if (!st.empty()){
        cout << "Impossible";
        return 0;
    }

    cout << ans;
}