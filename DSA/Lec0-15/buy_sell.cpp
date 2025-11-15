#include<iostream>
using namespace std;
#include<climits>
#include<vector>

int main() {

    vector <int> prices = {7, 2, 6, 3, 8, 1};

    int maxProfit = INT_MIN;
    int bestBuy = prices[0];

    for (int i = 0; i<prices.size(); i++) {
        if (bestBuy > prices[i]) {
            bestBuy = prices[i];
        }
        maxProfit = max(maxProfit, prices[i]-bestBuy);

    }
    cout<<maxProfit;
    // cout<<endl<<prices.size();

    return 0;
    
}