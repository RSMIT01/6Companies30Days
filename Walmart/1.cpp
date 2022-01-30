//link:https://leetcode.com/problems/path-with-maximum-probability/
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edge, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>>graph(n);
        bool isreach=false;
        for(int i=0;i<edge.size();i++)
        {
            graph[edge[i][0]].push_back({edge[i][1],succProb[i]});
            graph[edge[i][1]].push_back({edge[i][0],succProb[i]});
            if(edge[i][0]==end || edge[i][1]==end)
            {
                isreach=true;
            }
        }
        if(!isreach)
        {
            return 0;
        }
        vector<double>maxprob(n,INT_MIN);
        priority_queue<pair<double,int>>pq;
        pq.push({1,start});
        while(!pq.empty())
        {
             double prob=pq.top().first;
            int src=pq.top().second;
            pq.pop();
            for(auto it:graph[src])
            {
                double p=it.second;
                int s=it.first;
                if(maxprob[s]<p*prob)
                {
                    maxprob[s]=p*prob;
                     pq.push({maxprob[s],s});
                }
               
            }
        }
        return maxprob[end]!=INT_MIN?maxprob[end]:0;
    }
};