#include<iostream>
using namespace std;

int adj(vector<vector<int>> A)
{
    int n=A[0].size();
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i] = max( A[0][i], A[1][i] );
    }
    int i=0,sum=0;
    {
        while(i<n-1)
        {
            if(a[i]>a[i+1])
            {
                sum+=a[i];
                i++;
            }
            else
            {
                ;
            }
            
            i++;
        }
        return sum;
    }
}
int ans(in,a[])
{
    if(i>=n) return 0;
    if(i==n-1) return a[n-1];
    if(memo[i]!=-1) return memo[i];

    memo[i] = max(a[i]+ans(i+2),ans(i+1));
    return memo[i];
}
int main()
{
    int n,a,b;
    pair<int,int> *  = new pair<int,int>[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        a

    int n;cin>>n;
    for(int i=0;i<n;i++)