//link:https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int *ans=new int[2];
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]==2)
            {
                ans[0]=i;
            }
            if(m[i]==0)
            {
                ans[1]=i;
            }
        }
        return ans;
    }
};