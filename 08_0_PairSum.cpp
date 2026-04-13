#include<iostream>
#include<vector>
using namespace std;

// Brute force Approach
vector<int> pairSum(vector<int>& nums, int tar) {
    vector<int> ans;

    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(tar == nums[i]+nums[j]) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};

    vector<int> ans = pairSum(nums, 9);
    for(int val: ans) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}