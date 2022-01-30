//link:https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1/
class Solution
{
    public:
    //Function to find total number of unique paths.
    void solve(int i,int j,int a,int b,int &ans)
    {
        if(i==a && j==b)
        {
            ans++;
        }
        if(i>a || j>b)
        {
            return;
        }
        solve(i+1,j,a,b,ans);
        solve(i,j+1,a,b,ans);
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        int ans=0;
        solve(1,1,a,b,ans);
        return ans;
    }
};
