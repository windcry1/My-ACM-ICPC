//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int i,n,m,x,y,z,w,t;
	vector<int> x1,y1,x2,y2,num;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z>>w;
		x1.push_back(x);
		y1.push_back(y);
		x2.push_back(z);
		y2.push_back(w);
		num.push_back(i+1);
	}
	while(m--)
	{
		cin>>x>>y;
		for(i=n-1;i>=0;i--)
		{
			if(x>=x1[i]&&x<=x2[i]&&y>=y1[i]&y<=y2[i])
			{
				printf("%d\n",num[i]);
				x=x1[i];x1.erase(x1.begin()+i);
				y=y1[i];y1.erase(y1.begin()+i);
				z=x2[i];x2.erase(x2.begin()+i);
				w=y2[i];y2.erase(y2.begin()+i);
				t=num[i];num.erase(num.begin()+i);
				x1.push_back(x);
				y1.push_back(y);
				x2.push_back(z);
				y2.push_back(w);
				num.push_back(t);
				break;
			}
		}
		if(i==-1)
			printf("IGNORED\n");
	}
	return 0;
}

