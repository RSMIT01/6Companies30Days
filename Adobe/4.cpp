//link:https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
class Solution{
public: 
    int solve(int arr[],int n,int sum, vector<vector<int>>&dp)
    {
        if(sum==0)
        {
            return 1;
        }
        if(n<0 || sum<0)
        {
            return 0;
        }
        if(dp[n][sum]!=-1)
        {
            return dp[n][sum];
        }
        return dp[n][sum]=solve(arr,n-1,sum,dp) || solve(arr,n-1,sum-arr[n],dp);
        
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            return 0;
        }
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
        return solve(arr,N-1,sum/2,dp);
    }
};