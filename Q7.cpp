//You are given a rod of length N and an array prices[] where prices[i] represents the price of a rod of length i+1. 
//Your task is to determine the maximum profit you can achieve by cutting the rod into smaller lengths and selling the pieces.

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int n, vector<int> prices){
    if(n <= 0) return 0;
    int maxPro = 0;
    for (int i = 0; i < n && i < prices.size(); i++) {
            int profit = prices[i] + maxProfit(n - i - 1, prices);
            maxPro = max(maxPro, profit);
    }
    return maxPro;
}

int main(){
    int n = 8;
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    cout<<maxProfit(n,prices)<<endl;
    return 0;
}