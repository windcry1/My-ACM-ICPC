/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/24/2019 11:00:56 PM
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
const int INF=100000;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int x,y;
		int A=-INF,B=INF,C=INF,D=-INF;
		for(int i=0;i<n;i++)
		{
			int t1,t2,t3,t4;
			cin>>x>>y>>t1>>t2>>t3>>t4;
			if(!t1) A=max(A,x);
			if(!t2) B=min(B,y);
			if(!t3) C=min(C,x);
			if(!t4) D=max(D,y);
		}
		if(A<=C&&D<=B)
		{
			cout<<"1 "<<A<<" "<<D<<" "<<endl;
			continue;
		}
		cout<<"0"<<endl;
	}
 	return 0;
}

