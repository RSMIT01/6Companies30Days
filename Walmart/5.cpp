//link:https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1/#
class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node *root)
    {
        if(!root)
        {
            return 0;
        }
        int left_val=solve(root->left);
        int right_val=solve(root->right);
         int cur=root->data;
         root->data= left_val+right_val;
         return left_val+right_val+cur;
    }
    void toSumTree(Node *node)
    {
        // Your code here
       solve(node);
        
    }
};
