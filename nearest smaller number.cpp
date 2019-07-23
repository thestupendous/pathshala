//nearest smaller number to the left of every number in an array
#include<stack>
#include<iostream>
using namespace std;
void way1();

void way2(int *a,int n,int *res){
	stack<pair<int,int> > st;
	for(int i=n-1;i>-1;i--)
	{
		if(st.empty())
			st.push({a[i],i});
		else{
			if(st.top().first >a[i])
				{
				while(!st.empty() and st.top().first >a[i])
				{
					res[st.top().second] = a[i];
					st.pop();
				}
				st.push({a[i],i});
			}
			else
			{
				st.push({a[i],i});
			}
		}
	}
	while(!st.empty())
	{
		a[st.top().second]=-1;
	}
}

int main()
{
	int n,*a,*res,t;
	cin>>n;
	a= new int[n];
	res=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];


	way2(a,n,res);
}



