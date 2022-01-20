//link:https://practice.geeksforgeeks.org/problems/pots-of-gold-game/1/
class Solution {
public: 
    int solve(vector<int> &arr,int start,int end, vector<vector<int>> &dp)
    {
        if(start>end)
        {
            return 0;
        }
        if(dp[start][end]!=-1)
        {
            return dp[start][end];
        }
        int left=arr[start]+min(solve(arr,start+2,end,dp),solve(arr,start+1,end-1,dp));
        int right=arr[end]+min(solve(arr,start+1,end-1,dp),solve(arr,start,end-2,dp));
        return dp[start][end]=max(left,right);
    }
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	    return solve(A,0,n-1,dp);
    }
};