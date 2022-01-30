//link:https://leetcode.com/problems/generate-random-point-in-a-circle/
class Solution {
public:
     double x,y,r;
    Solution(double radius, double x_center, double y_center) {
         x=x_center;
         y=y_center;
         r=radius;
    }
    
    vector<double> randPoint() {
        double random=(double) rand()/RAND_MAX;
        double theta=2*3.14159*random;
        
        double random2=(double) rand()/RAND_MAX;
        double length=sqrt(random2)*r;
        
        
        double r_x=x+length*cos(theta);
        double r_y=y+length*sin(theta);
        
        return vector<double>{r_x,r_y};
    }
};