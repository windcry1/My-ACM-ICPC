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
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	char data;
	node *lchild,*rchild;
};
node* build(char *pre,char *in,int n)
{
	if(n<=0)
		return NULL;
	char *p;
	int k;
	node *t=new node;
	t->data=*pre;
	for(p=in;p<in+n;p++)
		if(*p==*pre)
			break;
	k=p-in;
	t->lchild=build(pre+1,in,k);
	t->rchild=build(pre+1+k,p+1,n-k-1);
	return t;
}
void print(node *p)
{
	if(p!=NULL)
	{
		print(p->lchild);
		print(p->rchild);
		cout<<p->data;
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char pre[1000],in[1000];
	cin>>in>>pre;
	node *p=build(pre,in,strlen(in));
	print(p);
 	return 0;
}

