//link:https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/#
int count_trees(Node *root,int x,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int cursum=(root->data)+count_trees(root->left,x,ans)+count_trees(root->right,x,ans);
    if(cursum==x)
    {
        ans++;
    }
    return cursum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int ans=0;
	count_trees(root,X,ans);
	return ans;
}