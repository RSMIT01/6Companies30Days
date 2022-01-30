//link:https://leetcode.com/problems/maximum-performance-of-a-team/
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
          arr.push_back({efficiency[i],speed[i]});
        }
        sort(arr.begin(),arr.end());
       
        long long sum=0;
        long long ans=0;
         for(int i=arr.size()-1;i>=0;i--)
         {
             pq.push(arr[i].second);
             sum+=arr[i].second;
             if(pq.size()>k)
             {
                 sum-=pq.top();
                 pq.pop();
                 
             }
           
                 ans=max(ans,sum*arr[i].first);
         }
        return ans%1000000007;
        }
};