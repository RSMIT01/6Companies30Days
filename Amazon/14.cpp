// link:https://practice.geeksforgeeks.org/problems/burning-tree/1/#
class Solution {
  public:
  int find_time(Node *start,map<Node*,Node*> &m)
  {
      queue<Node*>q;
      map<Node*,int>visited;
      q.push(start);
      visited[start]=1;
      int time=0;
     
      while(!q.empty())
      {
          int sz=q.size();
          int burn=0;
           
          while(sz--)
          {
             
              Node *cur=q.front();
              q.pop();
          
              if(cur->left && !visited[cur->left])
              {
                  q.push(cur->left);
                  visited[cur->left]=1;
                  burn=1;
              }
                if(cur->right && !visited[cur->right])
              {
                  q.push(cur->right);
                  visited[cur->right]=1;
                 burn=1;
              }
                if(m[cur] && !visited[m[cur]])
              {
                  q.push(m[cur]);
                  visited[m[cur]]=1;
                 burn=1;
              }
              
          }
          if(burn)
          {
              
              time++;
          }
      }
      return time;
  }
    Node *find_start(Node *root,int target,map<Node*,Node*>&m)
    {
        queue<Node*>q;
        q.push(root);
        Node *res;
        while(!q.empty())
        {
            Node *cur=q.front();
            q.pop();
            if(cur->data==target)
            {
                res=cur;
            }
            if(cur->left)
            {
                q.push(cur->left);
                m[cur->left]=cur;
            }
            if(cur->right)
            {
                q.push(cur->right);
                m[cur->right]=cur;
            }
        }
        return res;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node *,Node *>m;
        Node *start=find_start(root,target,m);
        int ans=find_time(start,m);
        return ans;
    }
};