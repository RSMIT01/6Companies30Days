//link:https://leetcode.com/problems/course-schedule-ii/
class Solution {
public:
    
    vector<int> solve( vector<int>adj[], vector<int>&ans,int n)
    {
        vector<int>in(n,0);
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                in[it]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            ans.push_back(cur);
            for(auto i:adj[cur])
            {
                in[i]--;
                if(in[i]==0)
                {
                    q.push(i);
                }
            }
        }
        if(ans.size()==n)
        {
            reverse(ans.begin(),ans.end());
            return ans;
        }
        else
        {
            ans.clear();
            return ans;
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        }
        vector<int>ans;
       return solve(adj,ans,numCourses);
    }
};