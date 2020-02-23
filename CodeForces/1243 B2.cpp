/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/13/2019 7:46:11 PM
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
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		vector<pii> ans;
		string a,b;cin>>a>>b;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						swap(a[j],b[i]);
						ans.emplace_back(j,i);
						break;
					} 
					if(a[i]==b[j]){
						swap(a[j],b[j]);
						swap(a[j],b[i]);
						ans.emplace_back(j,j);
						ans.emplace_back(j,i);
						break;
					}
				}
			}
		}
		if(a!=b) cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl<<ans.size()<<endl;
			for(auto i:ans){
				cout<<i.first+1<<" "<<i.second+1<<endl;
			}
		}
	}
	return 0;
}

