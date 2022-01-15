//link:https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/
void rotate(int n,int a[][n])
{
    //code here
    //transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reverse rows
   for(int i=0;i<n/2;i++)
   {
       for(int j=0;j<n;j++)
       {
             int temp=a[i][j];
            a[i][j]=a[n-i-1][j];
            a[n-i-1][j]=temp;
       }
   }
}