/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 9:42:23 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
char s[10010][20];
int main()
{
 	//ios::sync_with_stdio(false);
	//cin.tie(0);
    //cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	scanf("%d",&n);
	int hs,ms,ss,hd,md,sd,min1=INF,max2=-INF,s1,s2;
	for(int i=0;i<n;i++)
	{
		scanf("%s%d%*c%d%*c%d%d%*c%d%*c%d",s[i],&hs,&ms,&ss,&hd,&md,&sd);
		int t1=hs*3600+ms*60+ss,t2=hd*3600+md*60+sd;
		if(min1>t1)
			min1=t1,s1=i;
		if(max2<t2)
			max2=t2,s2=i; 
	}
	cout<<s[s1]<<" "<<s[s2]<<endl;
 	return 0;
}

