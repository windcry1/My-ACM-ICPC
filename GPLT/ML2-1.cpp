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
const int MMAX=2147483647;
const int mod=1e9+7;
struct node{
	int end,value;
}x[100010];
struct cxx{
	int start,end,value;
};
int key[10010]={0};
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int t,n,temp;
	vector<cxx> ve;
	cin>>t>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		scanf("%d%d",&x[temp].value,&x[temp].end);
	}
	int y=t,p=t;
	while(y!=-1)
	{
		if(!key[abs(x[y].value)])
		{
			key[abs(x[y].value)]=1;
			p=y;
			y=x[y].end;
		}
		else
		{
			x[p].end=x[y].end;
			cxx l;
			l.start=y;
			l.value=x[y].value;
			l.end=x[y].end;
			int p=ve.size();
			if(p)
				ve[p-1].end=y;
			ve.push_back(l);
			y=x[y].end;
		}
	}
	y=t;
	while(y!=-1)
	{
		if(x[y].end!=-1)
			printf("%05d %d %05d\n",y,x[y].value,x[y].end);
		else
			printf("%05d %d %d\n",y,x[y].value,x[y].end);
		y=x[y].end;
	}
	if(ve.size())
		ve[ve.size()-1].end=-1;
	for(int i=0;i<ve.size();i++)
	{
		if(ve[i].end!=-1)
			printf("%05d %d %05d\n",ve[i].start,ve[i].value,ve[i].end);
		else
			printf("%05d %d %d\n",ve[i].start,ve[i].value,ve[i].end);
	}
 	return 0;
}

