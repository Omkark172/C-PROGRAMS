// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
#include <climits>
using namespace std;

void maxProfit(int *prices , int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1 ; i<n ; i++){
        bestBuy[i] = min(bestBuy[i-1] , prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0 ; i<n ; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit , currProfit);
    }
    cout<<"max Profit = "<<maxProfit<<endl;
}

int main(){
    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}