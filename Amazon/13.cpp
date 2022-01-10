//link:https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<int>q;
        int level=0;
        int fresh=0;
       vector<vector<int>>dir={{0,-1},{0,1},{-1,0},{1,0}};
         int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
              if(grid[i][j]==2)
              {
                  q.push(i*m+j);
              }
              if(grid[i][j]==1)
              {
                  fresh++;
              }
          }
            
        }
        if(q.empty() && fresh==0)
        {
            return 0;
        }
        while(!q.empty())
        {
           int size=q.size();
           while(size--)
           {
               int cur=q.front();
                q.pop();
                int row=cur/m;
                int col=cur%m; 
                for(int k=0;k<dir.size();k++)
                {
                     int nr=row+dir[k][0];
                      int nc=col+dir[k][1];
                    if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1)
                    {
                        grid[nr][nc]=2;
                        fresh--;
                        q.push(nr*m+nc);
                    }
                }
           }
            level++;
        }
        if(fresh!=0)
        {
            return -1;
        }
        return level-1;
    }
};