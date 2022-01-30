//link:https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/
class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        int alice=0;
        int bob=0;
        if(n<=2)
        {
            return false;
        }
        for(int i=1;i<n-1;i++)
        {
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A')
            {
                alice++;
            }
             if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B')
            {
                bob++;
            }
        }
        if(alice>bob)
        {
            return true;
        }
        return false;
    }
};