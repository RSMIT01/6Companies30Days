//link:https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1#
class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void make_arr(Node *root,vector<int>&tree)
     {
        
         if(root==NULL)
         {
             return;
         }
         make_arr(root->left,tree);
          tree.push_back(root->data);
          make_arr(root->right,tree);
     }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>tree;
        make_arr(root,tree);
        return tree;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       Node *head=new Node(-1);
       Node *temp=head;
       for(int i=0;i<A.size();i++)
       {
          temp->right=new Node(A[i]);
          temp=temp->right;
       }
       return head->right;
    }

};