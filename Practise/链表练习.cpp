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
void create(node *head,int n)//������ô�������� 
{
	node *s,*p;
	cin>>head->x;//head��x������ 
	head->next=NULL;//head��next��Ϊ��ָ�� 
	p=head;//βָ����� 
	for(int i=1;i<n;i++)
	{
		s=(node*)malloc(sizeof(node));
		cin>>s->x;//���� 
		p->next=s;//βָ���next����ָ�����������node��λ�ã�����s��nextָ���Ϊ��ָ�� 
		s->next=NULL;
		p=s;//βָ�����
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
	while(s!=NULL)//��next��NULLʱ���� 
	{
		cout<<s->x<<' ';
		s=s->next;
	}
}
int main()
{
	node *head=(node*)malloc(sizeof(node));
	int n,t;
	cin>>n;//���������� 
	create(head,n);
	cin>>t;
	if(Delete(head,t,n))
		print(head);
	else printf("error!");
	return 0;
}

