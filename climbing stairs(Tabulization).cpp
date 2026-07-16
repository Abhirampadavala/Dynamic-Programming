class Solution {
public:
//Tabulization
    int ClimbStairs(int n,vector<int>&dp)
   {
    if(dp[n]!=-1) return dp[n];
    //using for loop instead of recursion
    for(int i=3;i<=n;i++)
    {
    dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
   }

    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
        //base cases write first either here or in above function
        dp[1]=1;
        dp[2]=2;
        return ClimbStairs(n,dp);        
    }
};
