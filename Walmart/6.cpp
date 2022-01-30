//link:https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1/?company[]=Walmart&company[]=Walmart&page=1&query=company[]Walmartpage1company[]Walmart
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(long long N,long long R)
    {
       //Your code here
        long long ans=1;
        while(R>0)
        {
            if(R&1)
            {
                ans=(ans*N)%1000000007;
            }
            N=(N*N)%1000000007;
            R=R>>1;
        }
        return ans; 
    }

};