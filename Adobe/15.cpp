#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

vector<vector<int>>v(n);
for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    v[i].push_back(0);
    for(auto c:s)
    {
        if(c=='.')
        {
            v[i].push_back(0);
        }
        else
        {
            v[i].back() = v[i].back()*10 + (c - '0');
        }
    }
}
    sort(v.begin(),v.end());
       bool point = false;
    cout<<"Latest: ";
    for(auto n: v.back()) {
        if(point) cout << ".";
        cout << n;
        point = true;
    }


return 0;
}