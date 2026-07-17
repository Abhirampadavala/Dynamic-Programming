class Solution {
public:
  int robbery(int i,vector<int>&nums)
  {
    if(i==0) return nums[0];
    if(i<0) return 0;
    return max(nums[i]+robbery(i-2,nums),robbery(i-1,nums));
  }
    int rob(vector<int>& nums) {
       int index=nums.size();
       return robbery(index-1,nums);
    }
};
