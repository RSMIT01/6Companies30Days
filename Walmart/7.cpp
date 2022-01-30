//link:https://practice.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1/#
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int>ans;
        if(N<3)
        {
            return ans;
        }
        int prev=arr[0],cur=-1,next=-1;
        for(int i=0;i<N;i++)
        {
            if(cur!=-1 && next!=-1)
            {
                break;
            }
            else if(arr[i]<prev && cur==-1)
            {
                prev=arr[i];
            }
            else if(arr[i]>prev && cur==-1)
            {
                cur=arr[i];
            }
            else if(arr[i]>prev && arr[i]<cur)
            {
                cur=arr[i];
            }
            else if(arr[i]>cur && cur!=-1 && next==-1)
            {
                next=arr[i];
            }
        }
        if(cur!=-1 && next!=-1)
        {
            ans.push_back(prev);
            ans.push_back(cur);
            ans.push_back(next);
        }
        return ans;
    }
};