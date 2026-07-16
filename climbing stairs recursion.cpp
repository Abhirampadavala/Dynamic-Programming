class Solution {
public:
    int climbStairs(int n) {
        //base cases
        if(n==1)return 1;
        if(n==2)return 2;
      //recursion step
          return climbStairs(n-1)+climbStairs(n-2);    
    }
};
//however this gives TLE at some n
