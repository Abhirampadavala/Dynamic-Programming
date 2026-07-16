
class Solution {
  public:
    
    int countW(int n,vector<int>&dp)
    {   //base cases
         dp[1]=1;
         dp[2]=2;
         dp[3]=4;
        if(dp[n]!=-1) return dp[n];
        
        //Tabulization uses for loops
        for(int i=4;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
    int countWays(int n) {
        //***watchout that you have to declate an n+3 size dp vector becuz if n=1 and then you declare till dp[3], it wouldnt exist if size kept is dp[n]***
        vector<int>dp(n+3,-1);
        return countW(n,dp);     
    }
};
