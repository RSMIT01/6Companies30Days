//link:https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1/
class Solution{
    public:
    class elem{
           public:
            int value;
            int vsize;
            int idx;
            int row;
            
            elem(int val,int n,int j,int i)
            {
                value=val;
                vsize=n;
                idx=j;
                row=i;
            }
        };
    struct mycomp{
        bool operator()(elem e1,elem e2)
       {
            return e1.value>e2.value;
       }
    };
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
          //code here
          int mini=INT_MAX;
        int maxi=INT_MIN;
        int low,high;
        priority_queue<elem,vector<elem>,mycomp>q;
        for(int i=0;i<k;i++)
        {
           q.push(elem(nums[i][0],n,0,i));
              mini=min(mini,nums[i][0]);
              maxi=max(maxi,nums[i][0]);
        }
    
    int range=INT_MAX;
    while(!q.empty())
    {
        elem curr=q.top();
        q.pop();
        int newmin=curr.value;
        if(range>maxi-newmin)
        {
           
                mini=newmin;
                range=maxi-mini;
                low=mini;
               high=maxi;
           
        }
        if(curr.idx==curr.vsize-1)
        {
           break;
        }
        curr.idx+=1;
       q.push(elem(nums[curr.row][curr.idx],n,curr.idx,curr.row));
         maxi=max(maxi,nums[curr.row][curr.idx]);
    }
    return {low,high};
    }
};