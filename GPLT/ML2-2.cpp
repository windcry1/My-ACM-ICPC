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
	double wei;
	double money;
	double bl;
}a[100001];
bool cmp(const node a,const node b)
{
	return a.bl>b.bl;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	double d;
	int n;
	scanf("%d%lf",&n,&d);
	for(int i=0;i<n;i++)
		scanf("%lf",&a[i].wei);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a[i].money);
		a[i].bl=a[i].money/a[i].wei;
	}
	sort(a,a+n,cmp);
	double sum=0;
	for(int i=0;i<n;i++)
	{
		if(d>=a[i].wei)
		{
			sum+=a[i].money;
			d-=a[i].wei;
		}
		else
		{
			sum+=d*a[i].bl;
			break;
		}
	}
	printf("%.2lf\n",sum);
 	return 0;
}

