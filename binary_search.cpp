#include<iostream>
using namespace std;

void bin(int *a,int l,int r,int v,int &ans)
{
	if(r<=l) return ;
	int mid = (l+r) /2;
	if(a[mid]==v) { cout<<"at "<<mid<<endl; ans = mid; bin(a,l,mid-1,v,ans); }
	if(v<a[mid])
		{ bin(a,l,mid-1,v,ans); return;}
	if(v>a[mid])
		{ bin(a,mid+1,r,v,ans);return;}
}

int main()
{
	int a[]={-29,-29,-29,-29,0,34,924,1000,9999,6343824};
	int ans;
	bin(a,0,8,-29,ans);
	cout<<ans<<endl;
	return 0;
}