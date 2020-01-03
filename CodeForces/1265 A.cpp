/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/8/2019 5:27:52 PM
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		string s=" ",t;cin>>t;s+=t;
		s+=" ";
		for(int i=1;i<s.size()-1;i++){
			if(s[i]=='?'){
				bool flag[3]={0};
				if(islower(s[i-1]))
					flag[s[i-1]-'a']=1;
				if(islower(s[i+1]))
					flag[s[i+1]-'a']=1;
				for(int j=0;j<3;j++){
					if(!flag[j]){
						s[i]=j+'a';
						break;
					}
				}
			}
		}
		int flag=0;
		for(int i=1;i<s.size()-2;i++){
			if(s[i]==s[i+1]){
				cout<<-1<<endl;
				flag=1;
				break;
			}
		}
		if(flag) continue;
		for(int i=1;i<s.size()-1;i++) cout<<s[i];
		cout<<endl;
	}
	return 0;
}

