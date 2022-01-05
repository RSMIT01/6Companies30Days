//link:https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull>s;
	    s.insert(1);
	    n--;
	    while(n--)
	    {
	        auto cur=s.begin();
	        s.erase(cur);
	        ull a=*cur;
	        s.insert(a*2);
	         s.insert(a*3);
	          s.insert(a*5);
	    }
	    return *s.begin();
	    
	}
};