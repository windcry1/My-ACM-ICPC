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
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int bz,sl,gl,pl,bz1,sl1,gl1,pl1,r1=0,r2=0,r3=0,r4=0;
	cin>>bz>>bz1;
	cin>>sl>>sl1;
	cin>>gl>>gl1;
	cin>>pl>>pl1;
	int total=bz+sl+gl+pl,p=0;
	if(pl1-pl>0)
	{
		r4=pl1-pl;
		gl1+=pl1-pl;
	}
	if(gl1-gl>0)
	{
		r3=gl1-gl;
		sl1+=gl1-gl;
	}
	if(sl1-sl>0)
	{
		r2=sl1-sl;
		bz1+=sl1-sl;
	}
	cout<<r2<<endl;
	cout<<r3<<endl;
	cout<<r4<<endl;
 	return 0;
}

