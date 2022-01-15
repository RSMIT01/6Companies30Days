//link:https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#
vector<string> generate(int N)
{
	// Your code here
	vector<string>ans;

	for(int i=1;i<=N;i++)
	{
	    int cur=i;
	    string s="";
	    while(cur)
	    {
	        s=to_string(cur%2)+s;
	        cur=cur>>1;
	    }
	    ans.push_back(s);
	}
	return ans;
}