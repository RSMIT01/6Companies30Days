//link:https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/#
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int dp[10001];
    int solve(int arr[],int n)
    {
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=max(solve(arr,n-1),arr[n]+solve(arr,n-2));
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
         memset(dp,-1,sizeof(dp));
        return solve(arr,n-1);
       
    }
};