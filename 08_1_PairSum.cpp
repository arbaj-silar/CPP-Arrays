#include<iostream>
#include<vector>
using namespace std;

// Brute force Approach
vector<int> pairSum(vector<int>& nums, int tar) {
    int st = 0, end = nums.size()-1;

    while(st < end) {
        if(nums[st]+nums[end] == tar) {
            return {st, end};
        } else if(nums[st]+nums[end] > tar) {
            end--;
        } else {
            st++;
        }
    }
    return {-1, -1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};

    vector<int> ans = pairSum(nums, 18);
    for(int val: ans) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}