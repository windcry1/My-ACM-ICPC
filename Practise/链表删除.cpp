#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Link
{
	int data;
	struct Link *next;
}link;
//void initlink(link *&a,int n)
//{
//	if(!n)
//		return ;
//    link *s,*t;
//	s=(link *)malloc(sizeof(link));
//	t=(link *)malloc(sizeof(link));	
//	cin>>s->data;
//	a=s;
//	for(int i=1;i<n;i++)
//	{
//		cin>>t->data;
//		s->next=t;
//		s=t;
//	}
//	s->next=NULL;
//	return ;
//}
link* initlink(int n)
{
	link *head=(link*)malloc(sizeof(link));
	link *s,*p=head;//head是一个空的空间，标记头方便后续 
	head->next=NULL;
	for(int i=0;i<n;i++)//总共n个数字 
	{
		s=(link*)malloc(sizeof(link));
		p->next=s;
		cin>>s->data;
		s->next=NULL;
		p=s;
	}
	return head;
}
//void deletes(link *&a,int n,int sta)
//{
//	link *s=a,*t;
//	s=(link *)malloc(sizeof(link));
//	t=(link *)malloc(sizeof(link));
//	if(sta==2)
//	{
//		a=a->next;
//		free(s);
//	}
//	else
//	{
//		int i=sta-2;
//		while(--i)
//		{
//			s=s->next;
//		}
//		t=s->next;
//		s->next=s->next->next;
//		free(t);
//	}
//	return ;
//}
int deletes(link *&a,int sta)
{
	link *p=a,*s=a->next;
	int count=2;
	while(s!=NULL)
	{
		if(count==sta)
		{
			p->next=s->next;
			free(s);
			return 1;
		}
		p=s;
		s=s->next;
		count++;
	}
	return 0;
}
void output(link *a)
{
	link *s;
	s=a->next;
	while(s!=NULL)
	{
		cout<<s->data<<' ';
		s=s->next;
	}
}
int main()
{
	int n;
	cin >> n;
	link *a;
	a = initlink (n);
	int sta;
	cin >> sta;
	if(deletes (a ,sta)==1)
		output (a);
	else cout<<"error!";
	return 0;
}
