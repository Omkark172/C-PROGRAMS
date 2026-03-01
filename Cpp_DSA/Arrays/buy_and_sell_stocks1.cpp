// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
#include <climits>
using namespace std;

int maxProfit(int *prices , int n){
    int buyPrice = INT_MAX;
    int maxProfit = 0;

    for(int i=0 ; i<n ; i++){
        if(buyPrice < prices[i]){//profit
            int profit = prices[i] - buyPrice;//todays profit
            maxProfit = max(maxProfit , profit);
        }
        else{
            buyPrice = prices[i];
        }
    }
    return maxProfit;
}

int main(){
    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    cout<<maxProfit(prices,n)<<endl;
    return 0;
}