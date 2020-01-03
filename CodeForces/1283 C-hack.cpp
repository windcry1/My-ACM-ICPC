/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/29/2019 1:17:18 AM
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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
vector<int> v;
int a[200010],pos[200010];
bool flag[200010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(!a[i]) flag[i]=1;
		pos[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		if(!pos[i]) v.push_back(i);
	}
	unsigned it=0;
	for(int i=1;i<=n;i++) {
		if(flag[i]){
			if(it<(int)v.size()-1){
				if(i==v[it]) swap(v[it],v[it+1]);
				a[i]=v[it++];
			}
			else{
				if(i!=v[it]) a[i]=v[it];
				else{
					for(int j=1;j<=n;j++){
						if(flag[j]&&a[j]!=v[it]&&a[j]!=i){
							a[i]=a[j];
							a[j]=v[it];
							break;
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
