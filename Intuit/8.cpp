//link:https://leetcode.com/problems/number-of-boomerangs/
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        unordered_map<int,int>m;
        int ans=0;
        if(points.size()<=2)
        {
            return 0;
        }
        for(int i=0;i<points.size();i++)
        {
            
           for(int j=0; j<points.size();j++)
           {
               if(i==j)
               {
                   continue;
               }
               int x1=points[i][0];
               int y1=points[i][1];
               int x2=points[j][0];
               int y2=points[j][1];
            int d=pow((x1-x2),2)+pow((y1-y2),2);
            m[d]++;
           }
             for(auto i:m)
        {
         ans+=i.second*(i.second-1);   
         
        }
            m.clear();
        }
          
     return ans;
    }
};