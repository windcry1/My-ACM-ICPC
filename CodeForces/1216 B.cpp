	/*************************************************************************
	>>> Author: WindCry1
	>>> Mail: lanceyu120@gmail.com
	>>> Website: https://windcry1.com
	>>> Date: 9/22/2019 4:19:46 PM
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
	struct node{
		int val;
		int id;
		inline bool operator <(const node &b)const{
			return val>b.val;
		}
		inline void operator =(node b){
			val=b.val;
			id=b.id;
		}
	}a[1010],b[1010];
	int find(int n,int x){
		for(int i=0;i<n;i++)
			if(i==a[x].id) return i+1;
	}
	int main(){
		ios::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
		//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
		int n;cin>>n;for(int i=0;i<n;i++) cin>>a[i].val,a[i].id=i,b[i]=a[i];sort(a,a+n);ll res=0;
		for(int i=0;i<n;i++) res+=a[i].val*i+1;cout<<res<<endl;
		for(int i=0;i<n;i++) cout<<find(n,i)<<" ";cout<<endl;
		return 0;
	}

