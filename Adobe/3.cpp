//link:https://practice.geeksforgeeks.org/problems/7b9d245852bd8caf8a27d6d3961429f0a2b245f1/1/#
class Solution
{
  public:
   long long int solve(int N,int K,vector<vector<long long int>>&dp,int vowel)
    {
        if(N==0)
        {
            return 1;
        }
        if(dp[N][vowel]!=-1)
        {
            return dp[N][vowel];
        }
        if(vowel<K)
        {
            return dp[N][vowel]=(21*solve(N-1,K,dp,0)+5*solve(N-1,K,dp,vowel+1))%1000000007;
        }
        if(vowel==K)
        {
            return dp[N][vowel]=(21*solve(N-1,K,dp,0))%1000000007;
        }
        
    }
    int kvowelwords(int N, int K) {
        // Write Your Code here
        vector<vector<long long int>>dp(N+1,vector<long long int>(K+1,-1));
        return solve(N,K,dp,0)%1000000007;
    }
};