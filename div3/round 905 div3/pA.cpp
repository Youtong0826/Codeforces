#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, last, time;
    string s, nums = "1234567890";
    cin >> n;
    while (n--){
        cin >> s;//1920 1 8 1 7 1 9 1
        last = 1, time = 0;
        for (int i = 0; i < 4; i++){ 
            if (s[i] - '0' == last)
                time += 1;

            else{
                if (last == 0 || s[i] == '0')
                    time += 11 - abs((s[i] - '0') - last);
                else 
                    time += abs((s[i] - '0') - last) + 1;

                last = (s[i] - '0');
            }
        }

        cout << time << '\n';
    }
}