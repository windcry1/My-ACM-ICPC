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

int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a[4],d;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	int cnt=0;
	if(a[1]-a[0]<d)
		cnt+=d-a[1]+a[0];
	if(a[2]-a[1]<d)
		cnt+=d-a[2]+a[1];
	cout<<cnt<<endl;
	//cout<<abs(a[0]-a[1])-+abs(a[1]-a[2])<<endl;
 	return 0;
}

