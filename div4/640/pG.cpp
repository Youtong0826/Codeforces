#include <bits/stdc++.h>
#define Youtong ios::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n == 2 || n == 3){
        cout << "-1\n";
        return;
    }

    deque<int> dq({2, 4, 1, 3});
    bool flag = 1;
    for (int i = 5; i <= n; i++){
        if (flag)
            dq.push_back(i);
            
        else
            dq.push_front(i);

        flag ^= 1;
    }


    while (dq.size()){
        cout << dq.front() << ' ';
        dq.pop_front();
    }
    cout << '\n';
}

int main(){
    Youtong;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}