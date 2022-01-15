//link:https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/#
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       
       queue<Node *>q;
       q.push(root);
       
       while(!q.empty())
       {
           int sz=q.size();
           Node *prev=NULL;
           Node *cur=NULL;
           while(sz--)
           {
             
              cur=q.front();
              q.pop();
              if(prev) prev->nextRight = cur;
              if(cur->left) q.push(cur->left);
               if(cur->right) q.push(cur->right) ;
               prev=cur;
           }
       }
    }    
      
};