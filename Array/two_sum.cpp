
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int,int> mp;
    for(int i=0; i<nums.size(); i++) {
        int diff = target - nums[i];
        if(mp.find(diff) != mp.end()) {
            cout << "Indices: " << mp[diff] << " and " << i << endl;
            return 0;
        }
        mp[nums[i]] = i;
    }

    cout << "No solution found" << endl;
    return 0;
}