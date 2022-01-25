//link:https://practice.geeksforgeeks.org/problems/find-the-missing-no-in-string/1/#
int getVal(const string& str, int i, int m)
{
    if (i + m > str.length())
        return -1;
    int val = 0;
    for (int j = 0; j < m; j++)
    {
        int curr = str[i + j] - '0';
        if (curr < 0 || curr > 9)
            return -1;
        val = val * 10 + curr;
    }
    return val;
}
 
int missingNumber(const string& str)
{
    for (int i=1; i<=6; ++i)
    {
        int n = getVal(str, 0, i);
        if(n == -1){
          break;
        }
        int missing = -1;
        bool flag = true;
        for (int j=i; j!=str.length(); j += 1 + log10l(n))
        {
            if((missing == -1)&&(getVal(str, j, 1+log10l(n+2)) == n+2)){
                missing = n + 1;
                n += 2;
            }else if(getVal(str, j, 1+log10l(n+1)) == n+1){
                n++;
            }else{
                flag = false;
                break;
            }
        }
        if(flag){
          return missing;
        }
    }
    return -1;
}