//link:https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int n=str.size();
		    int dp[n+1]={0};
		     if(n==1 && str[0]!='0')
		     {
		          return 1; 
		     }
                if(str[0]=='0')
                {
                     return 0;
                }
               
		     dp[0]=1;
		     dp[1]=1;
		     for(int i=2;i<=n;i++)
		     {
		       
		         if(str[i-1]>'0')
		         {
		              dp[i]=dp[i-1];
		         }
		         if(str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<'7'))
		         {
		           dp[i]=(dp[i]+dp[i-2])%1000000007;
		         }
		         
		     }
		     return dp[n];
		}

};

