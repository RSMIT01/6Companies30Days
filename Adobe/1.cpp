//link:https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int sum=0;
        int i=0;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            sum+=arr[i];
            if(sum==s)
            {
                return {start+1,i+1};
            }
            if(sum>s)
            {
                while(sum>s)
                {
                    sum-=arr[start];
                    start++;
                    if(sum==s)
                    {
                        return {start+1,i+1};
                    }
                }
            }
           i++;
        }
        return {-1};
    }
};