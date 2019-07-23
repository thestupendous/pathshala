#include<iostream>
#include<algorithm>
using namespace std;

bool canPlace(vector<int> a,int noOfCows,int dist)
{
	int lastPose = a[0];
	placed = 1;
	for(int i=1;i<a.size();i++)
	{
		if(a[i]+lastPose >= dist)
		{
			lastPose = a[i];
			placed ++;
		}
	}
	if(placed>=noOfCows)
		return true;
}

int solve(const vector<int> a, int noOfCows) {
	sort(a.begin(),a.end());
    int l=1,r=a[a.size()-1];
    int mid,ans=0;
    while(r>l)
	{	mid = (l+r)/2;
	    if(canPlace(a,noOfCows,mid))
	    {
	    	ans = mid;
	    	l=mid+1;
	    }
	    else r=mid-1;
	}
	return ans;
}

int main()
{
