//link:https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		   int arr[26]={0};
		   queue<int>q;
		   for(int i=0;i<s.length();i++)
		   {
		       arr[s[i]-'a']++;
		       
		       if(arr[s[i]-'a']==1) q.push(s[i]);
		       while(!q.empty() && arr[q.front()-'a']!=1) q.pop();
		       if(q.empty())
		       {
		           s[i]='#';
		       }
		       else
		       {
		           s[i]=q.front();
		       }
		   }   
		   return s;
		}

};