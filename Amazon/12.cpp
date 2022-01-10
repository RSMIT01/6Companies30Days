//link:https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/#
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n>0)
        {
            char ch='A'+(n-1)%26;
            ans=ch+ans;
            n=(n-1)/26;
        }
        return ans;
    }
};
