#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElemetent(vector<int> &nums) {
    int n = nums.size();
    int freq = 0, ans = -1;

    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        } 
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    for(int val: nums) {
        if(ans == val) {
            freq++;
        }
    }
    if(freq>n/2) return ans;
    else return -1;
}
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout<<"Major Element: "<<majorityElemetent(nums);
    cout<<endl;
    return 0;
}