//link:https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
string encode(string src)
{     
  //Your code here
  char cur=src[0];
  string res;
  int count=0;
  for(int i=0;i<src.length();i++)
  {
      if(src[i]!=cur)
      {
          res+=cur+to_string(count);
          cur=src[i];
          count=0;
      }
      count++;
  }
  res+=cur+to_string(count);
  return res;
}