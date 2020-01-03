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
#include<map>
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
int a,b,c;
bool vis[110][110];
struct op{
	int op;
	int val1,val2;
};
struct node{
	vector<op> v;
	int x,y;
	int step;
};
bool bfs()
{
	queue<node> q;
	vis[0][0]=true;
	node t;
	t.x=0;
	t.y=0;
	t.step=0;
	t.v.clear();
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==c||t.y==c)
		{
			cout<<t.step<<endl;
			for(int i=0;i<t.v.size();i++)
			{
				if(t.v[i].op==0)
					cout<<"FILL("<<t.v[i].val1<<")"<<endl;
				if(t.v[i].op==1)
					cout<<"DROP("<<t.v[i].val1<<")"<<endl;
				if(t.v[i].op==2)
					cout<<"POUR("<<t.v[i].val1<<","<<t.v[i].val2<<")"<<endl;
			}
			return true;
		}
		if(!vis[a][t.y])
		{
			vis[a][t.y]=true;
			int t1=t.x,t2=t.y;
			t.x=a;
			op temp;
			temp.op=0;
			temp.val1=1;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(!vis[t.x][b])
		{
			vis[t.x][b]=true;
			int t1=t.x,t2=t.y;
			t.y=b;
			op temp;
			temp.op=0;
			temp.val1=2;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(!vis[0][t.y])
		{
			vis[0][t.y]=true;
			int t1=t.x,t2=t.y;
			t.x=0;
			op temp;
			temp.op=1;
			temp.val1=1;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(!vis[t.x][0])
		{
			vis[t.x][0]=true;
			int t1=t.x,t2=t.y;
			t.y=0;
			op temp;
			temp.op=1;
			temp.val1=2;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(t.x+t.y<=a&&!vis[t.x+t.y][0])
		{
			vis[t.x+t.y][0]=true;
			int t1=t.x,t2=t.y;
			t.x=t.x+t.y;
			t.y=0;
			op temp;
			temp.op=2;
			temp.val1=2;
			temp.val2=1;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(t.x+t.y>a&&!vis[a][t.x+t.y-a])
		{
			vis[a][t.x+t.y-a]=true;
			int t1=t.x,t2=t.y;
			t.y=t.x+t.y-a;
			t.x=a;
			op temp;
			temp.op=2;
			temp.val1=2;
			temp.val2=1;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(t.x+t.y<=b&&!vis[0][t.x+t.y])
		{
			vis[0][t.x+t.y]=true;
			int t1=t.x,t2=t.y;
			t.y=t.x+t.y;
			t.x=0;
			op temp;
			temp.op=2;
			temp.val1=1;
			temp.val2=2;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
		if(t.x+t.y>b&&!vis[t.x+t.y-b][b])
		{
			vis[t.x+t.y-b][b]=true;
			int t1=t.x,t2=t.y;
			t.x=t.x+t.y-b;
			t.y=b;
			op temp;
			temp.op=2;
			temp.val1=1;
			temp.val2=2;
			t.v.push_back(temp);
			t.step++;
			q.push(t);
			t.v.pop_back();
			t.step--;
			t.x=t1;
			t.y=t2;
		}
	}
	return false;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>a>>b>>c;
	if(!bfs())
		cout<<"impossible\n";
 	return 0;
}

