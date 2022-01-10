//link:https://practice.geeksforgeeks.org/problems/maximum-profit4657/1#
class Solution {
  public:
  int dp[501][201][2];
   int solve(int a[],int k,int n,int i,int sell)
   {
       if(i>=n)
       {
           return 0;
       }
       if(!k)
       {
           return 0;
       }
       if(dp[i][k][sell]!=-1)
       {
           return dp[i][k][sell];
       }
       if(sell)
       {
           return dp[i][k][sell]=max(solve(a,k-1,n,i+1,0)+a[i],solve(a,k,n,i+1,sell));
       }
        return dp[i][k][sell]=max(solve(a,k,n,i+1,1)-a[i],solve(a,k,n,i+1,sell));
   }
    int maxProfit(int K, int N, int A[]) {
        // code here
      memset(dp,-1,sizeof(dp));
      return solve(A,K,N,0,0);
    }
};