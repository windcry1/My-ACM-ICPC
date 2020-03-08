#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int a[40010],b[40010],c[40010][40010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int>> v;
	for(int i=1;i<=sqrt(k);i++){
		if(n%i==0){
			v.push_back(make_pair(i,n/i));
			v.push_back(make_pair(n/i,i));
		}
	}
	vector<int> v1,v2;
	int cnt=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]==0){
			cnt=0;
			v1.push_back(cnt);
		}
		else{
			cnt++;
		} 
	}
	sort(v1.begin(),v1.end());
	cnt=0;
	for(int i=1;i<=n;i++) {
		cin>>b[i];
		if(b[i]==0){
			cnt=0;
			v2.push_back(cnt);
		}
		else{
			cnt++;
		} 
	}
	sort(v2.begin(),v2.end());
	int res=0;
	for(int i=0;i<v.size();i++){
		pair<int,int> now=v[i];
		if(lower_bound(v1.begin(),v1.end(),now.first)!=v1.end()&&lower_bound(v2.begin(),v2.end(),now.second)!=v2.end()){
			int a1=lower_bound(v1.begin(),v1.end(),now.first)-v1.begin();
			int b1=lower_bound(v2.begin(),v2.end(),now.second)-v2.begin();
			for(int j=a1;j<v1.size();j++){
				for(int k=b1;k<v2.size();k++){
					res+=(v1[j]-now.first+1)*(v2[k]-now.second+1);
				}
			}
		}
	}
	cout<<res<<endl;
    return 0;
}

