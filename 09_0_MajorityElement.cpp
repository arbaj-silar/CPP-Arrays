#include<iostream>
#include<vector>
using namespace std;

// Brute force Approach
int majorityElemetent(vector<int> &nums) {
    int n = nums.size();
    for(int val: nums) {
        int freq = 0;

        for(int el: nums) {
            if(val == el) {
                freq++;
            }
        }
        if(freq > n/2) {
            return val;
        }
    }

    return -1;
}
int main() {
    vector<int> nums = {2, 1, 1, 2, 2};

    cout<<"Major Element: "<<majorityElemetent(nums);
    cout<<endl;
    return 0;
}