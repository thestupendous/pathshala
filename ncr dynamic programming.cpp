//ncr = (n-1)cr + (n-1)c(r-1)

#include<iostream>
using namespace std;
int ncr(int n,int r,int m,int **memo)
{
	if(n<r) return 0;
	if(n==r or r==0)
		return 1;
	if(! (memo[i-1][j-1]) ) return memo[i-1][j-1];
	memo[n-1][r-1] = ( ncr(n-1,r,m,memo) + ncr(n-1,r-1,m,memo) ) % m;
	return memo[n-1][r-1];
}
int main()
{
	int n,r,m;
	cin>>n>>r>>m;
	int **a = new int*[n];
	for(int i=0;i<n;i++) a[i]=new int[r];
	for(int i=0;i<n;i++) for(int j=0;j<r;j++) memo[i-1][j-1]=-1;

	cout<<ncr(n,r,m,a)<<endl;

	return 0;
}