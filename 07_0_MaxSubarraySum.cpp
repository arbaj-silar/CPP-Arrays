#include<iostream>
#include<vector>
using namespace std;

// Brute force Approach
int maxSubArraySum(vector<int>& nums) {
    int maxSum = INT32_MIN;

    for(int i=0; i<nums.size(); i++) {
        int currSum = 0;
        for(int j=i; j<nums.size(); j++) {
            currSum += nums[j];
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {3, -4, 7, 2, -1, 8, -9};

    cout<<"Max subarray sum: "<<maxSubArraySum(nums)<<endl;
    return 0;
}