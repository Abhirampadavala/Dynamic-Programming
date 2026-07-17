class Solution {
public:
  
    int rob(vector<int>& nums) {
       int index=nums.size();
       vector<int>dp(index,-1);
       //tabulization uses for loops instead of recursion
       //and we build the dp array
      // base conditions
        dp[0]=nums[0];
        if(index==1) return dp[0];

        dp[1]=max(nums[0],nums[1]);
        if(index==2) return dp[1];

        for(int j=2;j<index;j++)
        {
            dp[j]=max(nums[j]+dp[j-2],dp[j-1]);
        }
       return dp[index-1];
    }
};
