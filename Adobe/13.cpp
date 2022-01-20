//link:https://practice.geeksforgeeks.org/problems/minimum-insertions-to-make-two-arrays-equal/1/#
class Solution {
  public:
  int LIS(vector<int> &v)
  {
      vector<int>lis;
      if(v.size()>0)
      {
           lis.push_back(v[0]);
      for(int i=1;i<v.size();i++)
      {
          if(lis.back()<v[i])
          {
              lis.push_back(v[i]);
          }
          else
          {
              int idx=lower_bound(lis.begin(),lis.end(),v[i])-lis.begin();
              lis[idx]=v[i];
          }
      }
      }
     
      return lis.size();
  }
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        unordered_set<int>s;
        vector<int>v;
        for(int i=0;i<M;i++)
        {
            s.insert(B[i]);
        }
        for(int i=0;i<N;i++)
        {
            if(s.find(A[i])!=s.end())
            {
                v.push_back(A[i]);
            }
        }
        return N+M-2*(LIS(v));
    }
};