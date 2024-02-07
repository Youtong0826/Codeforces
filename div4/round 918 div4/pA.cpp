#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    map<int, int> nums;
    cin >> t;
    while (t--){ 
        for (int i = 0; i < 3; i++){
            cin >> n;
            if (nums.find(n) == nums.end()) 
                nums[n] = 1; 
        
            else
                nums[n]++;
        }

        for (auto i:nums){
            if (i.second == 1)
                cout << i.first << '\n';
        }

        nums.clear();
    }
}