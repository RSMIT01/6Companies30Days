//link:https://leetcode.com/problems/pacific-atlantic-water-flow/
class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>> &arr, vector<vector<int>>& heights,int prev)
    {
        if(i<0 || j<0 || i>=heights.size() || j>=heights[0].size() || arr[i][j] || heights[i][j]<prev)
        {
            return;
        }
         arr[i][j]=true;
         dfs(i+1,j,arr,heights,heights[i][j]);
         dfs(i,j+1,arr,heights,heights[i][j]);
         dfs(i-1,j,arr,heights,heights[i][j]);
         dfs(i,j-1,arr,heights,heights[i][j]);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
      vector<vector<bool>>pacific(m,vector<bool>(n,false));
      vector<vector<bool>>atlantic(m,vector<bool>(n,false));
        for(int j=0;j<n;j++)
        {
            dfs(0,j,pacific,heights,INT_MIN);
            
            dfs(m-1,j,atlantic,heights,INT_MIN);
        }
         for(int i=0;i<m;i++)
        {
            dfs(i,0,pacific,heights,INT_MIN);
            
            dfs(i,n-1,atlantic,heights,INT_MIN);
        }
        vector<vector<int>>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};