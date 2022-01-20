//link:https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/#
class Solution
{
    public:
    void solve(int open,int close,string s,vector<string> &ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(s);
            return;
        }
        if(open>0)
        {
            s.push_back('(');
             solve(open-1,close,s,ans);
            s.pop_back();
        }
        if(open<close && close>0)
        {
            s.push_back(')');
             solve(open,close-1,s,ans);
            s.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
       vector<string>ans;
       solve(n,n,"",ans);
       return ans;
    }
};