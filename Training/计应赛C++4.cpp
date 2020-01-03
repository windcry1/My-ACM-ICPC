/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/17/2019 9:19:29 AM
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
double score[20]; 
struct node{
	string name;
	double a[20];
	double ave=0;
	inline bool operator <(const node &a)const{
		return ave>a.ave;
	}
}s[110];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;cin>>k;
	for(int i=0;i<k;i++){
		cin>>score[i];
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].name;
		for(int j=0;j<k;j++) cin>>s[i].a[j],s[i].ave+=s[i].a[j]*score[j];
	}
	sort(s,s+n);
	double ave=s[0].ave;
	cout<<s[0].name;
	for(int i=1;i<n;i++){
		if(s[i].ave==ave) cout<<" "<<s[i].name;
		else break;
	}
	cout<<endl;
	return 0;
}

