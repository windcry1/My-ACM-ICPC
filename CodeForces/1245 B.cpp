/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/2/2019 8:26:40 AM
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
int find(char c){
	if(c=='R') return 2;
	if(c=='P') return 1;
	if(c=='S') return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		int res=0;
		int n;cin>>n;int a[3];cin>>a[0]>>a[1]>>a[2];string s;cin>>s;
		bool flag[110]={0};
		for(auto i=0;i<s.size();i++){
			int temp=find(s[i]);
			if(a[temp]) a[temp]--,flag[i]=true,res++;
		}
		cout<<(res>=(n+1)/2?"YES":"NO")<<endl;
		if(res>=(n+1)/2){
			for(auto i=0;i<s.size();i++){
				if(flag[i]) cout<<(s[i]=='R'?'P':(s[i]=='S'?'R':'S'));
				else{
					for(int i=0;i<3;i++){
						if(a[i]){
							a[i]--;
							cout<<(i==0?'R':(i==1)?'P':'S'); 
							break;
						}
					}
				}
			}
			cout<<endl;
		}
	}
	return 0;
}

