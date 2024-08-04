#include <bits/stdc++.h>
using namespace std;

void f(int a[100], int b[100], int i, int j, int n){
    if((b[i] == 1 && b[j] == 3) || (b[i] == 2 && b[j] == 3) || (b[i] == 2 && b[i] == 3))
        return;

    for (int x = 0 ;x < j; j++){
        b[i] = 1;
        b[j] = 1;
        f(a, b, i+1, x, n);   
    }
}

int main(){
    int t, n, a[100], b[100];
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++){
                
                if((b[i] == 1 && b[j] == 3) || (b[i] == 2 && b[j] == 3) || (b[i] == 2 && b[i] == 3));
            }
    }
    
    
}