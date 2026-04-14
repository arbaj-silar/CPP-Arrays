#include<iostream>
#include<vector>
using namespace std;

// Brute Approach
int maxArea(vector<int>& height) {
    int ans = 0;
    for(int i=0; i<height.size(); i++) {
        for(int j=i+1; j<height.size(); j++) {
            int ht = min(height[i], height[j]);
            int wd = j-i;
            int area = ht * wd;
            ans = max(area, ans);
        }
    }

    return ans;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<"Max area: "<<maxArea(height)<<endl;
    return 0;
}