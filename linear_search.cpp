#include<iostream>
using namespace std;

int lsearch(int *a,int n,int v)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==v) return i;
	}
	return -1;
}

int main()
{
	int a[]={34,2,-34,0,34,99,43,-347,61};
	cout<<lsearch(a,9,-3473);

	return 0;
}