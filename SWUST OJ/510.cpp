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
	int h,m;
	double a;
}x[10001];
bool cmp(const node a,const node b)
{
	return a.a<b.a;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		char c;
		double ah,am,MIN=MMAX;
		int i=0;
		while(ss>>x[i].h>>c>>x[i].m)
		{
			double th;
			if(x[i].h>=12)
				th=x[i].h-12;
			else th=x[i].h;
			ah=th*30+x[i].m*0.5;
			am=x[i].m*6;
			x[i++].a=min(fabs(ah-am),360-fabs(ah-am));
		}
		sort(x,x+i,cmp);
		printf("%02d:%02d\n",x[i/2].h,x[i/2].m);
	}
 	return 0;
}

