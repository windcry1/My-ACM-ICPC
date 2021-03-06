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
int b[2510][2510];
int f[2510];
struct sut{
	int x,y,m;
}a[6260000];
int cmp(sut a,sut b){
	return a.m<b.m;
}
int find(int x){
	if(f[x]==x) return x;
	else return f[x]=find(f[x]);
}
int uni(int a,int b){
	int t1,t2;
	t1=find(a);
	t2=find(b);
	if(t1!=t2){
		f[t2]=t1;
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int t;
			cin>>t;
			b[i][j]=t;
			if(i!=j){
				cnt++; 
				a[cnt].x=i;
				a[cnt].y=j;
				a[cnt].m=t;
			}
		}
	}
	sort(a+1,a+1+cnt,cmp);
	for(int i=1;i<=n;i++) f[i]=i;
	int sum=0;
	for(int i=1;i<=cnt;i++){
		if(uni(a[i].x,a[i].y)){
			sum++;
			cout<<a[i].x<<" "<<a[i].y<<endl;
		}
		if(sum==n-1) break;
	}
    return 0;
}

