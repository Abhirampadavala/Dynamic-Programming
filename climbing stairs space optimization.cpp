class Solution {
public:

    int climbStairs(int n) {
     if(n<=2) return n;
       int prev1=1;
       int prev2=2;
       int curr;
//space optimization using no dp array but just 3 variables and for loop
       for(int i=2;i<n;i++)
       {
        curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
       }
       return curr;
               
    }
};
