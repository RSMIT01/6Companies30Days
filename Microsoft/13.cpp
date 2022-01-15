//link:https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1#
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(int node,vector<int> &visited,vector<int>adj[],int c,int d)
    {
        visited[node]=1;
        for(auto it:adj[node])
        {
            if(node==c && it==d) continue;
            if(visited[it]==-1)
            {
                dfs(it,visited,adj,c,d);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<int>visited(V+1,-1);
        dfs(c,visited,adj,c,d);
        if(visited[d]==-1)
        {
            return 1;
        }
        return 0;
    }
};