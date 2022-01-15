//link:https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        vector<int>ans(r*c);
        int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    int count=0;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            ans[count++]=matrix[top][i];
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            ans[count++]=matrix[i][right];
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                ans[count++]=matrix[bottom][i];
            }
            bottom--;
        }
        
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans[count++]=matrix[i][left];
            }
            left++;
        }
        
    }
    return ans;
    }
};