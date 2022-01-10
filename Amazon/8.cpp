//link:https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/#

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    
    long long countWays(int m)
    {
        // your code here
       
      if(m<=0)
      {
          return 0;
      }
      else if(m==1)
      {
          return 1;
      }
      else if(m==2)
      {
          return 2;
      }
      else if(m%2==0)
      {
          return 1+countWays(m-1);
      }
      return countWays(m-1);
    }
};



//one liner solution
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    
    long long countWays(int m)
    {
        // your code here
       
        return 1+m/2;
    }
};
