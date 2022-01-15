//link:https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1#
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        
        set <vector<int>> s;
        sort(arr.begin(),arr.end());
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
                int start=j+1;
                int end=n-1;
                while(start<end)
                {
                    long long sum=arr[i]+arr[j]+arr[start]+arr[end];
                    if(sum==k)
                    {
                        vector<int>temp={arr[i],arr[j],arr[start],arr[end]};
                        s.insert(temp);
                        start++;
                        end--;
                    }
                    else if(sum>k)
                    {
                        end--;
                    }
                    else
                    {
                        start++;
                    }
                }
            
           }
       }
       vector<vector<int>>ans(s.begin(),s.end());
       return ans;
    }
};