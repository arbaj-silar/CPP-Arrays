#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& price) {
    int bestBuy = price[0], maxprofit = 0;

    for(int i=0; i<price.size(); i++) {
        if(price[i] > bestBuy) {
            maxprofit = max(maxprofit, price[i]-bestBuy);
        }

        bestBuy = min(bestBuy, price[i]);
    }

    return maxprofit;
}
int main() {
    vector<int> price = {7, 1, 5, 3, 6, 4};

    cout<<"Maximux Profit: "<<maxProfit(price);
    cout<<endl;
    return 0;
}