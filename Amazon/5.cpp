//link:https://practice.geeksforgeeks.org/problems/phone-directory4628/1/#
class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        set<string>m;
        vector<vector<string>>ans(s.size());
        for(int i=0;i<n;i++)
        {
            m.insert(contact[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            for(auto it:m)
            {
                if(s.substr(0,i+1)==it.substr(0,i+1))
                {
                     ans[i].push_back(it);
                }
            }
            if(ans[i].size()==0)
            {
                ans[i].push_back("0");
            }
        }
        
        return ans;
    }
};