//link:https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/#
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
     void solve(string p,int idx,int n,int a[],vector<string>&ans, vector<string>key)
    {
        if(idx==n)
        {
            ans.push_back(p);
            return;
        }
       for(int i=0;i<key[a[idx]-2].size();i++)
       {
             solve(p+key[a[idx]-2][i],idx+1,n,a,ans,key);
       }
      
    }

    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;
        string p="";
        vector<string>key={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(p,0,N,a,ans,key);
        return ans;

    }
};
