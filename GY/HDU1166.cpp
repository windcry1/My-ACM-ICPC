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
int bit[50010];
inline int lowbit(int x){
	return (-x)&x;
}
int n;
void edit(int pos,int val){
	for(int i=pos;i<=n;i+=lowbit(i)){
		bit[i]+=val;
	//	bit2[i]+=val*pos;
	}
}
int query(int pos){
	int res=0;
	for(int i=pos;i>=1;i-=lowbit(i)){
		res+=bit[i];
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int t;
	cin>>t;
	int cnt=0;
	while(t--){
		memset(bit,0,sizeof bit);
		cnt++;
		cout<<"Case "<<cnt<<":"<<endl;
		cin>>n;
		for(int i=1;i<=n;i++){
			int d;
			cin>>d;
			edit(i,d);
		}
		string s;
		while(cin>>s){
			if(s=="End") break;
			if(s=="Add"){
				int a,b;
				cin>>a>>b;
				edit(a,b);
			}
			if(s=="Sub"){
				int a,b;
				cin>>a>>b;
				edit(a,-b);
			}
			if(s=="Query"){
				int a,b;
				cin>>a>>b;
				cout<<query(b)-query(a-1)<<endl;
			}
		}
	}
    return 0;
}

