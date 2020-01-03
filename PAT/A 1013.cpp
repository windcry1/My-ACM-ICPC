#include<iostream>
using namespace std;
int n,m,k;
const int maxsize=1002;
int node[maxsize];
int connect[1010000][2];//保存连接的两个城市 
int find_root(int a)//寻找根节点 
{
	while(node[a]!=a)
		a=node[a];
	return a;
}
int get_root(int a)//递归降低复杂度 
{
	if(node[a]!=a)
	node[a]=get_root(node[a]);
	return node[a];
}
void non_con(int v)
{
	for(int i=1;i<=n;++i)//初始化 
		node[i]=i;
		
	for(int i=0;i<m;++i)
	{
		if(connect[i][0]!=v && connect[i][1]!=v)
		{
			int a=get_root(connect[i][0]);
			int b=get_root(connect[i][1]);
			if(a!=b) node[a]=b;
		}
	}
	//return ct;
} 
int main()
{
	//freopen("in.txt","r",stdin);
	cin>>n>>m>>k;
	for(int i=0;i<m;++i)
		cin>>connect[i][0]>>connect[i][1];
	int a;
	for(int i=0;i<k;++i)
	{
		cin>>a;
		non_con(a);
		int ct=0;
		for(int i=1;i<=n;++i)
		{
			if(i!=a && node[i]==i)
			++ct;
		}
		cout<<ct-1<<endl;
	}
 
	return 0;
}
