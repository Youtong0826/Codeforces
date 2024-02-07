#include<bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie()
using namespace std;

int main(){
    fastio;
    int n, a, b;
    cin >> n;
    while (n--){
        cin >> a >> b;
        cout << a*(b/2) << '\n';
    }
}