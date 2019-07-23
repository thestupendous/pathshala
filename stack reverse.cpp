//without using explicit space (only recursion stack)
#include<iostream>
using namespace std;
#include<stack>

void pushs(stack<int> &st,int v)
{
	if(st.empty()) { st.push(v); return; }
	int a=st.top();
	st.pop();
	pushs(st,v);
}
void rev(stack<int> &st)
{
	if(st.empty()) return;

	int a = st.top();
	rev(st);
	if(st.size()>=2)
		pushs(st,a);
	else
		st.push(a);
}
int main()
{
	stack<int> s;
	s.push(3);
	s.push(5);
	s.push(8);
	s.push(0);
	s.push(10);
	rev(s);

	int i=0;
	while(i<s.size())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}
