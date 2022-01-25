//link:https://leetcode.com/problems/as-far-from-land-as-possible/
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dir={{1,0},{0,1},{-1,0},{0,-1}};
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        queue<pair<pair<int,int>,pair<int,int>>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                 visited[i][j]=true;
                    q.push({{i,j},{i,j}});
                }
            }
        }
        int ans=-1;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                auto [cur,land]=q.front();
                auto [i,j]=cur;
                auto [landx,landy]=land;
                q.pop();
                for(auto it:dir)
                {
                    int newx=i+it[0];
                    int newy=j+it[1];
                    if(newx<0 || newy<0 || newx>=n || newy>=n || visited[newx][newy])
                    {
                        continue;
                    }
                    visited[newx][newy]=true;
                    ans=max(ans,abs(newx-landx)+abs(newy-landy));
                    q.push({{newx,newy},{landx,landy}});
                    
                }
            }

        }
        return ans;
    }
};