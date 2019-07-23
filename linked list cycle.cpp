#include<iostream>
using namespace std;

typedef struct t 
{
	int data;
	t * next;
}node,*nodep;

void insert(nodep &head, int va)
{
	nodep n = new node;
	n->next = NULL;
	n->data = va;
	if(head==NULL){
		head=n;
		return;
	}
	nodep p = head;
	while(p->next != NULL) p=p->next;
	p->next = n;
}
void checkCycle(nodep head)
{
	nodep p,fp;
	p = fp = head;
	if(p->next)
	p=p->next;
 	if(fp->next)
	fp=fp->next;
	if(fp->next)
	fp=fp->next;

	while(fp!=p)
	{
		if(p->next)
		p=p->next;
		else return 0;
	 	if(fp->next)
		fp=fp->next;
		else return 0;
		if(fp->next)
		fp=fp->next;
		else return 0;
	}
	return 1;
}
int main()
{
	int n,t;
	nodep head;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		insert(head,t);
	}

	cout<<checkCycle(head)<<endl;

	return 0;
}