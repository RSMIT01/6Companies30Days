//link:https://leetcode.com/problems/guess-number-higher-or-lower-ii/
class Solution {
public:
    int solve(int left,int right, vector<vector<int>> &dp)
    {
        if(left>=right)
        {
            return 0;
        }
        if(dp[left][right]!=-1)
        {
            return dp[left][right];
        }
        int pay=INT_MAX;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            temp+=max(solve(left,i-1,dp),solve(i+1,right,dp));
            pay=min(pay,temp);
        }
        return dp[left][right]=pay;
    }
    int getMoneyAmount(int n) {
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return solve(1,n,dp); 
    }
};