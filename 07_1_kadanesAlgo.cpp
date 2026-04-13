#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int>& nums) {
    int currSum = 0, maxSum = INT32_MIN;

    for(int val: nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {3, -4, 7, 2, -1, 8, -9};

    cout<<"Max subarray sum: "<<maxSubarraySum(nums)<<endl;
    return 0;
}