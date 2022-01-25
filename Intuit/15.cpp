//link:https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=INT_MIN;
        for(auto i:piles)
        {
          high=max(i,high);
        }
        while(low<high)
        {
            int mid=(high+low)/2;
            int k=0;
            for(auto i:piles)
            {
                k+=(i+mid-1)/mid;
            }
            if(k<=h)
            {
                high=mid;
            }
            else
            {
              low=mid+1;
            }
        }
        return low;
    }
};