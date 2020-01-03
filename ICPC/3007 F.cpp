/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/14/2019 12:26:57 PM
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
ll a[500010];ll mem[500010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;cin>>n>>k;
	ll sum=0;
	for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
	sort(a+1,a+n+1);
	double ave = (double)sum/n;
	ll res=0,res1=0;
	for(int i=1;i<=n;i++){
		if(a[i]<=ave) res+=floor(ave)-a[i];
		else if(a[i]>ave) break;
	}
	for(int i=n;i>=1;i--){
		if(a[i]>=ave) res1+=-ceil(ave)+a[i];
		else if(a[i]<ave) break;
	}
	int t1,t2;
	for(int i=2;i<=n;i++){
		if(a[i]<=ave) mem[i-1] = (a[i]-a[i-1])*(i-1);
		else {
			mem[i-1]=(i-1)*(floor(ave)-a[i-1]);
			t1=i;
			break;
		}
	}
	for(int i=n-1;i>=1;i--){
		if(a[i]>=ave) mem[i+1] = (a[i+1]-a[i])*(n-i);
		else {
			mem[i+1]=(n-i)*(-ceil(ave)+a[i+1]);
			t2=i;
			break;
		}
	}
	cout<<"Debug info:"<<endl;
	cout<<"ave: "<<ave<<endl;
	cout<<res<<" "<<res1<<endl;
	for(int i=1;i<=n;i++)
		cout<<mem[i]<<" ";cout<<endl;
	cout<<"End of Debug"<<endl;
	int now1=0,now2=0,tt1=-1,tt2=-1;
	for(int i=1;i<t1;i++){
		now1+=mem[i];
		if(now1>=k){
			tt1=i;
			break;
		}
	}
	for(int i=n;i>t2;i--){
		now2+=mem[i];
		if(now2>=k){
			tt2=i;
			break;
		}
	}
	ll l=a[tt1-1],r=a[tt2],mid;
	cout<<l<<" "<<r<<endl;
	if(tt1==-1&&tt2==-1){
		cout<<(sum/n*n==sum?0:1)<<endl;
		return 0;
	}
	
	return 0;
}

