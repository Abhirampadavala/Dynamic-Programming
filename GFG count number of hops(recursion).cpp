class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 4;
        
        return countWays(n-1)+countWays(n-2)+countWays(n-3);   
    }
};
