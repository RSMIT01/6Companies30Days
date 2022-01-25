//link:https://leetcode.com/problems/number-of-provinces/
class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int i,int j)
    {
       isConnected[i][j]=0;
        for(int it=0;it<isConnected[j].size();it++)
        {
            if(isConnected[j][it])
            {
                 dfs(isConnected,j,it);
            }
             
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int province=0;
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j])
                {
                    province++;
                    dfs(isConnected,i,j);
                }
            }
        }
        return province;
    }
};