/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/19/2019 12:07:17 AM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;string s;cin>>n>>s;
	int a[5]={0};
	for(int i=0;i<n;i++){
		if(s[i]=='z') a[0]++;
		if(s[i]=='e') a[1]++;
		if(s[i]=='r') a[2]++;
		if(s[i]=='o') a[3]++;
		if(s[i]=='n') a[4]++;
	}
	int res1=0,res2=0;
	if(a[3]>0&&a[4]>0&&a[1]>0)
		res1=1,a[3]--,a[4]--,a[1]--;
	res2=min(a[0],min(a[1],min(a[2],a[3])));
	a[0]-=res2;a[1]-=res2;a[2]-=res2;a[3]-=res2;
	int temp=min(a[3],min(a[4],a[1]));
	res1+=temp;a[3]-=temp;a[4]-=temp;a[1]-=temp;
	if(res2-a[4]<0) res1+=res2,res2=0;
	else res2-=a[4],res1+=a[4];
	for(int i=0;i<res1;i++)
		cout<<1<<" ";
	for(int i=0;i<res2;i++)
		cout<<0<<" ";
	cout<<endl;
	return 0;
}

