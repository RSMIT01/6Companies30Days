//link:https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers5647/1#
class Solution{
    public:
    long long numOfWays(int n, int x)
    {
        // code here
        long long dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        int maxi=pow(n,1.0/x);
        for(int i=2;i<=maxi;i++)
        {
            int cur=pow(i,x);
            for(int j=n;j>=cur;j--)
            {
                dp[j]+=dp[j-cur];
            }
        }
        return dp[n];
    }
};
