//link:https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1/
class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string str,string &ans,int k,int n,int idx)
    {
        if(k==0)
        {
            return;
        }
        char maxi=str[idx];   
        for(int i=idx+1;i<n;i++)
        {
            if(str[i]>maxi)
            {
                maxi=str[i];
            }
        }
        if(maxi!=str[idx])
        {
            k--;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(maxi==str[i])
            {
                swap(str[idx],str[i]);
                if(ans<str)
                {
                    ans=str;
                }
                solve(str,ans,k,str.size(),idx+1);
                 swap(str[idx],str[i]);
            }
        }
    }
  
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       solve(str,ans,k,str.size(),0);
       return ans;
    }
};