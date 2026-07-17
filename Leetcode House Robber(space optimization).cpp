class Solution {
public:
  
    int rob(vector<int>& nums) {
       int index=nums.size();
       //Space Optimization
        if(index==1) return nums[0];
        if(index==2) return max(nums[0],nums[1]);

        int curr;
        int prev1=max(nums[0],nums[1]);
        int prev2=nums[0];
        for(int j=2;j<index;j++)
        {
            curr=max(nums[j]+prev2,prev1);
            prev2=prev1;
            prev1=curr;
        }
       return curr;
    }
};
