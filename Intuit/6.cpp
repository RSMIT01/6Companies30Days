//link:https://leetcode.com/problems/find-in-mountain-array/
class Solution {
public:
  
    int find_peak(int low,int high,MountainArray &mountainArr)
    {
        while(low<=high)
        {
             int mid=low+(high-low)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid-1) && mountainArr.get(mid)>mountainArr.get(mid+1))
            {
                return mid;
            }
            else if(mountainArr.get(mid)>mountainArr.get(mid-1) && mountainArr.get(mid)<mountainArr.get(mid+1))
            {
                 low=mid+1;
            }
             else
            {
                 high=mid-1;
            }
        }
      return -1;
    }
    int find_target_ass(int low,int high,int target,MountainArray &mountainArr)
    {
        while(low<=high)
        {
             int mid=low+(high-low)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }
            else if(mountainArr.get(mid)<target)
            {
                 low=mid+1;
            }
             else 
            {
                 high=mid-1;
            }
        }
        return -1;
    }
     int find_target_dec(int low,int high,int target,MountainArray &mountainArr)
    {
        while(low<=high)
        {
             int mid=low+(high-low)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }
            else if(mountainArr.get(mid)>target)
            {
                 low=mid+1;
            }
             else 
            {
                 high=mid-1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
      int peak=find_peak(1,mountainArr.length()-1,mountainArr);
        cout<<peak;
       int res=find_target_ass(0,peak,target,mountainArr);
        if(res!=-1)
        {
            return res;
        }
        return find_target_dec(peak,mountainArr.length()-1,target,mountainArr);
    }
};