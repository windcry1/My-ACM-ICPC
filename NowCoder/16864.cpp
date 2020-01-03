//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	char c;
	vector<node*> v;
};
int res;
void build(node *&head,int cnt,string s)
{
	if(cnt==s.length())
		return ;
	vector<node*>::iterator it;
	for(it=head->v.begin();it!=head->v.end();it++)
		if((*it)->c==s[cnt])
		{
			cnt++;
			build(*it,cnt,s);
			return ;
		}
	node *t=new node;
	t->c=s[cnt++];
	head->v.push_back(t);
	build(t,cnt,s);
}
void count(node *head)
{
	res++;
	for(vector<node*>::iterator it=head->v.begin();it!=head->v.end();it++)
		count(*it);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	node *head=new node;
	string s;
	while(cin>>s)
		build(head,0,s);
	res=0;
	count(head);
	cout<<res<<endl;
 	return 0;
}

