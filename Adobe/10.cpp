//link:https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int maxi=0;
        string name;
        for(auto it:m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                name=it.first;
            }
        }
        vector<string>ans;
        ans.push_back(name);
        ans.push_back(to_string(maxi));
        return ans;
    }
};