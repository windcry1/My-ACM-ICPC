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
int sum[1000005],flag[1000005];
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int l,r;
	int a[1000][2]={
	6,6,
28,28,
220,284,
496,496,
1184,1210,
2620,2924,
5020,5564,
6232,6368,
8128,8128,
10744,10856,
12285,14595,
17296,18416,
63020,76084,
66928,66992,
67095,71145,
69615,87633,
79750,88730,
100485,124155,
122265,139815,
122368,123152,
141664,153176,
142310,168730,
171856,176336,
176272,180848,
185368,203432,
196724,202444,
280540,365084,
308620,389924,
319550,430402,
356408,399592,
437456,455344,
469028,486178
};
//	for(int i=2;i<=1000000;i++)
//	{
//		for(int j=1;j<=sqrt(i);j++)
//			if(i%j==0)
//				sum[i]+=j+i/j;
//		sum[i]-=i;
//	} 
	cin>>l>>r;
	map<int,int> ma;
	for(int i=0;i<32;i++)
		ma.insert(make_pair(a[i][0],a[i][1]));
	for(int i=l;i<=r;i++)
	{
//        if(sum[sum[i]]==i&&!flag[i])
//        {
//        	if(i!=sum[i])
//            	cout<<min(i,sum[i])<<","<<max(i,sum[i])<<","<<endl;
//            else cout<<i<<endl;
//            flag[i]=1;
//            flag[sum[i]]=1;
//        }
		if(ma[i]!=0)
		{
			if(i==ma[i])
				cout<<i<<endl;
			else
				cout<<i<<" "<<ma[i]<<endl;
		}
    }
 	return 0;
}

