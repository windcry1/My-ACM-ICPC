/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/8/2019 7:45:07 AM
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
	string id;
	int group;
	int score;
	int rank;
	inline bool operator <(const node &a) const{
		return score>a.score||(score==a.score&&id<a.id);
	}
}x[110];
bool cmp(const node &a,const node &b){
	return a.score>b.score;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	int cnt=0;
	for(int i=1;i<=T;i++){
		int now=cnt;
		int n;cin>>n;
		for(int j=0;j<n;j++)
		{
			x[cnt].group=i;
			cin>>x[cnt].id>>x[cnt].score;
			++cnt;
		}
		sort(x+now,x+cnt,cmp);
		for(int j=now;j<cnt;j++)
			x[j].rank=j-now+1;
	}
	sort(x,x+cnt);
	cout<<cnt<<endl;
	int pre=-1,now=0;
	for(int i=0;i<cnt;i++) {
		if(pre!=x[i].score)
			pre=x[i].score,now=i+1;
		cout<<x[i].id<<" "<<now<<" "<<x[i].group<<" "<<x[i].rank<<endl;
	}
	return 0;
}

