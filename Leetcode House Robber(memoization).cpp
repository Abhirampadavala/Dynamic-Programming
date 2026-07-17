class Solution {
public:
  int robbery(int i,vector<int>&nums,vector<int>&dp)
  {
    if(i==0) return nums[0];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(nums[i]+robbery(i-2,nums,dp),robbery(i-1,nums,dp));
  }
    int rob(vector<int>& nums) {
       int index=nums.size();
       vector<int>dp(index,-1);
       return dp[index-1]=robbery(index-1,nums,dp);
    }
};
