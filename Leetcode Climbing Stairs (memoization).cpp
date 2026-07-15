class Solution {
public:
//memoization(top down approach-recursion)
    int count(int i,int n,vector<int>&dp)
    {
        //number of ways from i=n to n is 1
        //number of ways from any i>n to n is 0(u cant go go backwards)
        if(i==n) return 1;
        if(i>n) return 0;

        //if already in dp array then just return it
        if(dp[i]!=-1) return dp[i];
        //otherwise calculate it and store in dp vector
        //this is recursion
        return dp[i]=count(i+1,n,dp)+count(i+2,n,dp); 
    }
    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
        //here below it means that number of steps in going from 0 to nth step
        return count(0,n,dp);
    }
};
