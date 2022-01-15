//link:https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/#
class Solution {
public:
    bool solve(vector<int> adj[], vector<int> &visited, vector<int> &dfsvisited,int i)
    {
        visited[i]=1;
        dfsvisited[i]=1;
        for(auto it:adj[i])
        {
            if(visited[it]==-1)
            {
                if(solve(adj,visited,dfsvisited,it))
	          {
	              return true;
	          }
            }
            else if(dfsvisited[it]!=-1)
            {
                return true;
            }
        }
        dfsvisited[i]=(-1);
        return false;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	      vector<int>visited(N+1,-1);
	      vector<int>dfsvisited(N+1,-1);
	      vector<int>adj[N+1];
	      for(auto i:prerequisites)
	      {
	          adj[i.first].push_back(i.second);
	      }
	      for(int i=0;i<N;i++)
	      {
	          if(solve(adj,visited,dfsvisited,i))
	          {
	              return false;
	          }
	      }
	      return true;
	}
};