//link:https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>ans;
        multiset<int>m;
        for(int i=0;i<k;i++)
        {
            m.insert(arr[i]);
        }
        ans.push_back(*m.rbegin());
        for(int i=k;i<n;i++)
        {
             m.erase(m.find(arr[i-k]));
             m.insert(arr[i]);
             ans.push_back(*m.rbegin());
        }
        return ans;
    }
};