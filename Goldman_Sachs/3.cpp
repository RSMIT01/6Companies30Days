//link:https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int prod=1;
        int start=0;
        int end=0;
        int ans=0;
        while(end<n)
        {
            prod*=a[end];
            while(start<n && prod>=k)
            {
                prod/=a[start];
                start++;
            }
            if(prod<k)
            {
                ans+=end-start+1;
                
            }
            end++;
        }
        return ans;
    }
};
