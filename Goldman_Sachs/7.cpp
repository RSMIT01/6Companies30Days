//link:https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#
class Solution {
  public:
    int findPosition(int n , int m , int k) {
        // code here
        if(m<=n-k+1)
        {
            return m+k-1;
        }
        m=m-(n-k+1);
        if(m%n==0)
        {
            return n;
        }
        return m%n;
    }
};