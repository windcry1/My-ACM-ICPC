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
	int id;
	string name;
	int flag;
}a[10001];
bool cmp(const node a,const node b)
{
	return a.name<b.name;
}
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].id>>a[i].name;
		a[i].flag=0;
	}
	sort(a,a+n,cmp);
	string s;
	int num=0;
	while(cin>>s)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i].name==s&&!a[i].flag)
			{
				a[i].flag=1;
				num++;
			}
		}
	}
	num=n-num;
	if(num)
	{
		cout<<num<<endl;
		for(int i=0;i<n;i++)
		{
			if(!a[i].flag)
				cout<<a[i].name<<endl;
		}
	}
	else cout<<"All students are here."<<endl;
 	return 0;
}

