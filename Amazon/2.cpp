//link:https://leetcode.com/problems/longest-mountain-in-array/
class Solution {
public:
    int longestMountain(vector<int>& arr) {
      int n=arr.size();
        int i=1;
        int inc_start,inc_end,dec_start,dec_end;
        int ans=0;
        while(i<n)
        {
            inc_start=i-1;
            while( i<n && arr[i]>arr[i-1])
            {
              i++;
            }
            inc_end=i-1;
            while(i<n && arr[i]==arr[i-1])
            {
             i++;
            }
            dec_start=i-1;
            while(i<n && arr[i]<arr[i-1])
            {
              i++;
            }
            dec_end=i-1;
            if(inc_start!=inc_end && dec_start!=dec_end && inc_end==dec_start)
            {
              ans=max(ans,dec_end-inc_start+1);
            }
        }
        return ans;
    }
};




// second approach
class Solution {
public:
    int longestMountain(vector<int>& arr) {
       
        vector<int> dp(arr.size());
           vector<int> dp1(arr.size());
    
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i]){
                dp[i]=dp[i-1]+1;
            }
        }
         for(int i=arr.size()-2;i>=1;i--){
            if(arr[i+1]<arr[i]){
                dp1[i]=dp1[i+1]+1;
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<dp.size();i++){
            if(dp[i]!=0&&dp1[i]!=0){
                ans=max(ans,dp[i]+dp1[i]+1);
            }
        }
        return ((ans==INT_MIN)?0:ans);
    }
};