/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/28/2019 12:37:02 PM
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
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int p = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct Mat{
	ll m[3][3];
};
Mat mat_cheng(Mat x,Mat y){
	Mat ans;
	for(int i=1;i<=2;i++)
	for(int j=1;j<=2;j++){
		ans.m[i][j]=0;
		for(int k=1;k<=2;++k){
			ans.m[i][j]+=(x.m[i][k]*y.m[k][j])%p;  //???+=,??=
			ans.m[i][j]%=p;
		}
	}
	return ans;
}
Mat power(Mat x,long long y)
{
	Mat ans;
	ans.m[1][1]=1;
	ans.m[1][2]=0;
	ans.m[2][1]=1;
	ans.m[2][2]=0;
	while(y){
		if(y&1) ans=mat_cheng(x,ans);
		y>>=1,x=mat_cheng(x,x);
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	ll n;
	while(cin>>n){
		Mat s;
		s.m[1][1]=1;s.m[1][2]=1;s.m[2][1]=1;s.m[2][2]=0;
		if(n==1||n==2) {
			cout<<1<<endl;
			continue;
		}
		s=power(s,n-3);
		cout<<(s.m[1][1]+s.m[2][1])%p<<endl;
	}
	return 0;
}

