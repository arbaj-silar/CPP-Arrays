#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int st = 0, end = height.size()-1;

    while(st < end) {
        int ht = min(height[st], height[end]);
        int wd = end - st;
        int currWater = wd*ht;
        maxWater = max(maxWater, currWater);

        if(height[st]>height[end]) {
            end--;
        } else {
            st++;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<"Max area: "<<maxArea(height)<<endl;
    return 0;
}