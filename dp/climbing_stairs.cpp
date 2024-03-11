#include<iostream>
#include<vector>
using namespace std;
int fibbonacci(int n, vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1)return dp[n];
    dp[n] = fibbonacci(n-1,dp)+fibbonacci(n-2,dp);
    return dp[n];
}
int tabulation(int n){
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int  n;
    cin >> n;
    vector<int>dp(n+1,-1);
    // cout << fibbonacci(n,dp);
    // cout << tabulation(n);

    int prev2 = 0;
    int prev1 = 1;
    int curr;
    for(int i = 2;i<=n;i++){
        curr = prev2+prev1;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << curr << " ";

}