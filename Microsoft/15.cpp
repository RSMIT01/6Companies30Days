//link:https://practice.geeksforgeeks.org/problems/alien-dictionary/1/#
class Solution{
    public:
    void dfs(vector<int>adj[],vector<int> &visited,string &ans,int node)
    {
        visited[node]=1;
        for(auto it:adj[node])
        {
            if(!visited[it])
            {
                dfs(adj,visited,ans,it);
            }
        }
        char ch=node+'a';
        ans=ch+ans;
    }
    string findOrder(string dict[], int N, int k) {
        //code here
        vector<int>adj[k+1];
        for(int i=0;i<N-1;i++)
        {
            string w1=dict[i];
            string w2=dict[i+1];
            for(int j=0;j<min(w1.length(),w2.length());j++)
            {
                if(w1[j]!=w2[j])
                {
                    adj[w1[j]-'a'].push_back(w2[j]-'a');
                    break;
                }
            }
        }
        vector<int>visited(k,0);
        string ans="";
        for(int i=0;i<k;i++)
        {
            if(!visited[i])
            {
                dfs(adj,visited,ans,i);
            }
        }
        return ans;
    }
};