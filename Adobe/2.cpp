//link:https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/#
class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n<=2)
        {
            return n;
        }
        int ans=2;
       vector<vector<int>>dp(n, vector<int>(10001,0));
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff=A[j]-A[i];
                dp[j][diff]=max(dp[i][diff]+1,2);
               ans=max(ans,dp[j][diff]);
            }
        }
        return ans;
    }
};