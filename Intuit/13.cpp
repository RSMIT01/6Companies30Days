//link:https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/
class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int>zeros;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
             int count=0;
            for(int j=n-1;j>=0;j--)
            {
                if(grid[i][j]==1)
                {
                    
                    break;
                }
                else
                {
                    count++;
                }
            }
            zeros.push_back(count);
        }
        
        int swap=0;
        for(int i=0;i<n;i++)
        {
            int req_zero=n-i-1;
            for(int j=i;j<n;j++)
            {
               if(zeros[j]>=req_zero)
               {
                   swap+=(j-i);
                   zeros.insert(zeros.begin()+i,zeros[j]);
                   zeros.erase(zeros.begin()+j+1);
                  
                   break;
               }
               else if(j==n-1 && !(zeros[j]>=req_zero))
               {
                   return -1;
               }
            }
        }
        return swap;
    }
};