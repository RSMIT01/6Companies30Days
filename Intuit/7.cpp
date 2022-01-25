//link:https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class Solution {
public:
    int spilit_parts(vector<int>& nums, int largesum)
    {
        int cut=1;
        int temp=0;
        for(auto it:nums)
        {
            if(temp+it>largesum)
            {
                cut++;
                temp=it;
            }
            else
            {
                temp+=it;
            }
        }
        return cut;
    }
    int shipWithinDays(vector<int>& weights, int days) {
          int sum=0;
        int maxi=0;
        for(auto it:weights)
        {
            maxi=max(maxi,it);
            sum+=it;
        }
        int low=maxi;
        int high=sum;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int parts=spilit_parts(weights,mid);
            if(parts>days)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
    }
};