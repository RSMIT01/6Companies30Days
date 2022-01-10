//link:https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/#
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>ans;
        multiset<int>m;
        for(int i=0;i<k;i++)
        {
            m.insert(arr[i]);
        }
        ans.push_back(*m.rbegin());
        for(int i=k;i<arr.size();i++)
        {
             m.erase(m.find(arr[i-k]));
             m.insert(arr[i]);
             ans.push_back(*m.rbegin());
        }
        return ans;
    }
};