//link:https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1
class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
              ans+=" ";
              ans+=(s[i]+32);
            }
            else
            {
                 ans+=s[i];
            }
           
        } 
        if(ans[0]==' ')
        {
            return ans.substr(1);
        }
        return ans;
    }
};
