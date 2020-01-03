//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
struct node{
	int x;
	node *next;	
};
void destroy(node *&t)
{
	free(t);
}
void create(node *head,int n)//创建这么长的链表 
{
	node *s,*p;
	cin>>head->x;//head的x先输入 
	head->next=NULL;//head的next变为空指针 
	p=head;//尾指针后移 
	for(int i=1;i<n;i++)
	{
		s=(node*)malloc(sizeof(node));
		cin>>s->x;//输入 
		p->next=s;//尾指针的next变量指向刚申请来的node的位置，并把s的next指针变为空指针 
		s->next=NULL;
		p=s;//尾指针后移
	}
}
bool Delete(node *&head,int n,int total)
{
	node *s=head->next;
	node *former=head;
	int count=2;
	if(n==2&&total!=1)
	{
		head=head->next;
		return true;
	}
	if(n>2&&n<=total)
	{ 
		while(s!=NULL)
		{
			count++; 
			if(n==count)
			{
				former->next=s->next;
				destroy(s);
				return true;
			}
			former=s;
			s=s->next;
		}
	}
	return false;
}
void print(node *head)
{
	node *s=head;
	while(s!=NULL)//到next是NULL时结束 
	{
		cout<<s->x<<' ';
		s=s->next;
	}
}
int main()
{
	node *head=(node*)malloc(sizeof(node));
	int n,t;
	cin>>n;//输入链表长度 
	create(head,n);
	cin>>t;
	if(Delete(head,t,n))
		print(head);
	else printf("error!");
	return 0;
}

