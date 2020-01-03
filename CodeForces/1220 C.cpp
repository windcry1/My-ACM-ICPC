/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/19/2019 1:05:53 AM
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
int cnt[26];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;cin>>s;
	for(int i=0;i<s.length();i++){
		bool flag=false;
		for(int j=s[i]-1-'a';j>=0;j--)
			if(cnt[j]) flag=true;
		cout<<(flag?"Ann":"Mike")<<endl;
		cnt[s[i]-'a']++;
	}
	int l=s.size();
	char a[l];
	a[0]=s[0];
	for(int i=1;i<l;i++){
		if(s[i]<a[i-1]){
			a[i]=s[i];
		}
		else a[i]=a[i-1];
	}
	for(int i=0;i<l;i++){
		if(a[i]<s[i]) cout<<"Ann"<<endl;
		else cout<<"Mike"<<endl;
	}
	return 0;
}

