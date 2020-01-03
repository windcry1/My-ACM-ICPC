/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/13/2019 6:31:44 PM
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
	string name;
	int score;
	int num;
	inline bool operator <(const node &a)const{
		return score>a.score||(score==a.score&&name<a.name)||(score==a.score&&name==a.name&&num>a.num); 
	}
}a[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n,n){
		for(int i=0;i<n;i++) cin>>a[i].name>>a[i].score>>a[i].num;
		int m,mi;cin>>m>>mi;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(!m) break;
			if(a[i].num>=mi){
				m--;
				cout<<a[i].name<<endl;
			}
		}
	}
	return 0;
}

