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
ll a[200010];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt+=a[i]/2;
		a[i]-=(a[i]/2)*2;
		if(a[i]==1&&a[i+1]>=1)
		{
			a[i]--;
			a[i+1]--;
			cnt++; 
		}
	}
	cout<<cnt<<endl;
 	return 0;
}

