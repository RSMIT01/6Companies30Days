//link:https://practice.geeksforgeeks.org/problems/implement-atoi/1/#
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int i=0;
        int ans=0;
        int sign=1;
        if(str[0]=='-')
        {
            sign=(-1);
            i++;
        }
        while(i<str.length() && isdigit(str[i]))
        {
            ans=ans*10+(str[i]-'0');
            i++;
        }
        if(i==str.length())
        {
            return ans*sign;
        }
        return -1;
    }
};