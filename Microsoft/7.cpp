//link:https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/#
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int count(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() )
        {
            return 0;
        }
         if (!grid[i][j]) return 0;
        grid[i][j] = 0;
        return 1+count(grid,i+1,j)+count(grid,i,j+1)+count(grid,i-1,j)+count(grid,i,j-1)+count(grid,i+1,j+1)+count(grid,i-1,j-1)+count(grid,i+1,j-1)+count(grid,i-1,j+1);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                ans=max(ans,count(grid,i,j));
            }
        }
        return ans;
    }
};