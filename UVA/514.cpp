/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/16/2019 11:14:31 PM
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
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n) {
		if(n==0) break;
		int a[1010];
		while(cin>>a[0]){
			if(a[0]==0) break;
			for(int i=1;i<n;i++) cin>>a[i];
			bool flag[1010]={0};
			bool ok=1;
			stack<int> sta;
			for(int i=0;i<n;i++){
				for(int j=1;j<=a[i];j++){
					if(!flag[j]){
						flag[j]=1;
						sta.push(j);
					}
				}
				if(!sta.empty()&&sta.top()==a[i]) sta.pop();
				else {
					ok=0;
					break;
				}
			}
			cout<<(ok?"Yes":"No")<<endl;
		}
		cout<<endl;
	}
	return 0;
}

