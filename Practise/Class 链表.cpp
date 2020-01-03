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
class list{
	public: 
		node *create(int n)
		{
			node *head=(node *)malloc(sizeof(node));
			node *p=head,*s;
			cin>>head->x;
			head->next=NULL;
			for(int i=1;i<n;i++)
			{
				s=(node *)malloc(sizeof(node));
				cin>>s->x;
				s->next=NULL;
				p->next=s;
				p=s;
			}
			return head;
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
		bool Delete(node *&head,int n)
		{
			node *s=head;
			int count=2;
			if(n==2)
			{
				head=head->next;
				return true;
			}
			else
			{
				while(s->next!=NULL)
				{
					count++;
					if(count==n)
					{
						s->next=s->next->next;
						return true;
					}
					s=s->next;
				}
			}
			return false;
		}
		bool insert(node *head,int item,int data)
		{
			
		}
	private:
		void destroy(node *s)
		{
			free(s);
		}
};
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	list list1;
	node *head=list1.create(n);
	int t;
	cin>>t;
	if(list1.Delete(head,t))
		list1.print(head);
	else
		cout<<"error!";
	return 0;
}

