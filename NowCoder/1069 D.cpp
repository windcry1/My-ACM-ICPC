/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/29/2019 6:45:22 PM
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
int res[100010],w[100010],h[100010],l[100010],r[100010];
int find_r(int n) {

}
int find_l(int n) {
	for(int i=n-1; i>=0; i--) {
		if(h[i+1]>h[i])
			return i;
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	int MIN=MMAX,now;
	l[0]=0,r[0]=1;
	for(int i=1; i<=n; i++) {
		cin>>w[i]>>h[i];
		l[i]=r[i-1]+1;
		r[i]=r[i-1]+w[i];
		if(h[i]<MIN)
			MIN=h[i],now=i;
	}
	for(int i=1; i<=n; i++)
		cout<<l[i]<<" "<<r[i]<<endl;
	int left=l[now],right=r[now];
	int time=0;
	while(true) {
		res[now]=right-left+1;
		time+=res[now]*h[now];
		if(l[now]<r[now]) {
			int temp=find_l(now);
			left=l[temp];
		} else {

		}
	}
	return 0;
}

