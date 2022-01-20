//link:https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/
class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        int n=N.size();
        if(n<=3)
        {
            return "-1";
        }
        string left_half=N.substr(0,n/2);
        string ans;
        if(next_permutation(left_half.begin(),left_half.end()))
        {
            ans=left_half;
            if(n%2!=0)
            {
                ans+=N[n/2];
            }
            reverse(left_half.begin(),left_half.end());
            ans+=left_half;
            return ans;
        }
        return "-1";
    }
};