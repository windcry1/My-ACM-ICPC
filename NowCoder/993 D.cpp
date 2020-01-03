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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a[3];
	for(int i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
	int dis[2]={a[2]-a[1],a[1]-a[0]};
	if(dis[0]>dis[1])
		swap(dis[0],dis[1]);
	if(dis[0]==1)
	{
		if(dis[1]==1)
			cout<<0<<endl<<0<<endl;
		else if(dis[1]==2)
			cout<<1<<endl<<1<<endl;
		else cout<<2<<endl<<dis[1]-1<<endl;
	}
	else
	{
		cout<<min(2,dis[0]-1)<<endl<<dis[1]-1<<endl;
	}
 	return 0;
}

