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
struct sut{
	int x,y;
}a[1010];
int b[1010];
double dis(int x1,int y1,int x2,int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int f[1010];
int find(int x){
	return f[x]==x?x:find(f[x]);
}
void uni(int u,int v){
	if(find(u)!=find(v)){
		f[find(u)]=find(v);
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,d;
	cin>>n>>d;
	for(int i=1;i<=n;i++) f[i]=i;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	string s;int num=0;
	while(cin>>s){
		if(s[0]=='O'){
			int m;
			cin>>m;
			num++;
			b[num]=m;
			for(int i=1;i<=num;i++){
				if(dis(a[b[i]].x,a[b[i]].y,a[m].x,a[m].y)<=d)
				uni(b[i],m);
			}
		}
		else {
			int m,k;
			cin>>m>>k;
			if(find(m)==find(k)) cout<<"SUCCESS"<<endl;
			else cout<<"FAIL"<<endl;
		}
	}
    return 0;
}

