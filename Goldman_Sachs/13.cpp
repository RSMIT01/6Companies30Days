//link:https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#
class Solution
{
public:
    string solve(string &s, int &i)
    {
        string ans;
        while (i < s.size() && s[i] != ']')
        {
            int k = 0;
            if (isdigit(s[i]))
            {

                while (i < s.length() && isdigit(s[i]))
                {
                    k = k * 10 + s[i++] - '0';
                }
                i++;
                string r = solve(s, i);
                while (k > 0)
                {
                    ans += r;
                    k--;
                }
                i++;
            }
            else
            {
                ans += s[i++];
            }
        }
        return ans;
    }
    string decodedString(string s)
    {
        // code here
        int i = 0;
        return solve(s, i);
    }
};