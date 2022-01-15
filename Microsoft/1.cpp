//link:https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#
class Solution{

  public:
  int solve(int arr[],int n,vector<vector<int>> &dp,int i,int &sum,int cursum)
  {
      if(i==n)
      {
          return abs((sum-cursum)-cursum);
      }
      if(dp[i][cursum]!=-1)
      {
          return dp[i][cursum];
      }
      return dp[i][cursum]=min(solve(arr,n,dp,i+1,sum,cursum+arr[i]),solve(arr,n,dp,i+1,sum,cursum));
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    return solve(arr,n,dp,0,sum,0);
	} 
};
