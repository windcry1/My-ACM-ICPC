/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/14/2019 10:02:54 PM
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
char n[1010],m[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;cin>>a>>b>>n>>m;
	int max=0,pos=0;
	for(int i=0;i<=b-a;i++){
		int ans=0; 
		for(int j=0;j<a;j++){
			if(m[i+j]==n[j]){
				ans++;
			}
		}
		if(ans>max){
			max=ans;
			pos=i;
		}
	}
	cout<<a-max<<endl;
	for(int i=pos;i<a+pos;i++){
		if(m[i]!=n[i-pos]){
			cout<<i-pos+1<<endl;
		}
	}
	return 0;
}
