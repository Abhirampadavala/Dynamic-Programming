class Solution {
  public:
    
    int countW(int n,vector<int>&dp)
    {
        if(n==1) return dp[1]=1;
        if(n==2) return dp[2]=2;
        if(n==3) return dp[3]=4;
        if(dp[n]!=-1) return dp[n];
        //memoization uses recursion
        return dp[n]=countW(n-1,dp)+countW(n-2,dp)+countW(n-3,dp);
    }
    int countWays(int n) {
        // your code here
        vector<int>dp(n+3,-1);
        return countW(n,dp);
        
    }
};
