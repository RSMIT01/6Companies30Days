//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>>m;
        for(int i=0;i<string_list.size();i++)
        {
            string cur=string_list[i];
            sort(cur.begin(),cur.end());
            m[cur].push_back(string_list[i]);
        }
         vector<vector<string>>ans;
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};