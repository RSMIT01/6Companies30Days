//link:https://leetcode.com/problems/construct-quad-tree/
class Solution {
public:
    Node* quad_tree(vector<vector<int>>& grid,int row_start,int row_end,int col_start,int col_end,int size)
    {
         int sum=0;
         for(int i=row_start;i<row_end;i++)
         {
             for(int j=col_start;j<col_end;j++)
             {
                 sum+=grid[i][j];
             }
         }
        Node* ans;
        if(sum==(size*size))
        {
            ans=new Node(true,true);
        }
        else if(sum==0)
        {
            ans=new Node(false,true);
        }
        else
        {
            ans=new Node(true,false);
            size/=2;
            ans->topLeft=quad_tree(grid,row_start,row_start+size,col_start,col_start+size,size);
            ans->topRight=quad_tree(grid,row_start,row_start+size,col_start+size,col_end,size);
            ans->bottomLeft=quad_tree(grid,row_start+size,row_end,col_start,col_start+size,size);
            ans->bottomRight=quad_tree(grid,row_start+size,row_end,col_start+size,col_end,size);
            
        }
        return ans;
    }
    Node* construct(vector<vector<int>>& grid) {
        int n=grid.size();
        return quad_tree(grid,0,n,0,n,n);
    }
};