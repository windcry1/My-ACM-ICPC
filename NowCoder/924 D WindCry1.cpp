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
int sum[1000005];
int main()
{
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int l,r;
	for(int i=2;i<=500000;i++)
		for(int j=1;j<=sqrt(i)+1;j++)
			if(i%j==0)
				sum[i]+=j;
	cin>>l>>r;
//	for(int i=l;i<=r;i++)
//	{
//        //if(i==6 || i==28 || i==120 || i==496 || i==8128)
//            //cout<<i<<endl;
//        //else
//		if(sum[i]>i && sum[sum[i]]==i)
//        {
//            //cout<<min(i,sum[i])<<" "<<max(i,sum[i])<<endl;
//            //cout<<sum[i]<<" "<<i<<endl;
//        }
//    }
 	return 0;
}

