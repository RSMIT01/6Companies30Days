//link:https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
       stack<int>st;
        string ans;
        for(int i=0;i<=S.length();i++)
        {
           st.push(i+1);   
            if(S[i]=='I' || i==S.length())
            {
               while(!st.empty())
               {
                   ans+=to_string(st.top());
                   st.pop();
               }
            }
            
        }
        return ans;
    }
};