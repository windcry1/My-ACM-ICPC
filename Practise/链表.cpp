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
const int mod=1e9+7;
struct node{
	int x;
	node *next;
};
node* create(int n)
{
	node *head=(node*)malloc(sizeof(node));
	node *s,*p;
	cin>>head->x;
	head->next=NULL;
	p=head;
	for(int i=1;i<n;i++)
	{
		s=(node*)malloc(sizeof(node));
		cin>>s->x;
		p->next=s;
		p=s;
		s->next=NULL;
	}
	return head;
}
bool Delete(node *&head,int t)
{
	int count=2;
	node *s=head;
	if(t==2)
	{
		head=head->next;
		return true;
	}
	else
	{
		while(s!=NULL)
		{
			count++;
			if(t==count)
			{
				s->next=s->next->next;
				return true;
			}
			s=s->next;
		}
	}
	return false;
}
void print(node *head)
{
	node *s=head;
	while(s!=NULL)
	{
		cout<<s->x<<' ';
		s=s->next;
	}
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;
	cin>>n;
	node *head=create(n);
	cin>>t;
	if(t<=n&&Delete(head,t))
		print(head);
	else printf("error!");
	return 0;
}

