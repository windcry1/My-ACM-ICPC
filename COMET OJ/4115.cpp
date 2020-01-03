/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/8/2019 7:13:46 PM
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
int n;
string s;
vector<char> v1,v2,v3,v4;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		cin>>n>>s;
		int res=-1,f=0;
		for(int i=0;i<n;i++){
			if(s[i]=='p') {
				int pos=i;
				for(int j=i+1;j<n;j++){
					if(s[j]=='p') pos=j;
					if(s[j]=='i'){
						for(int k=j+1;k<n;k++){
							if(s[k]=='n'){
								for(int l=k+1;l<n;l++){
									if(s[l]=='k'){
										res=l-pos;
										f=1;
										break;
									}
								}
								if(f) break;
							}
						}
						if(f) break;
					}
				}
				if(f) break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

