#include<bits/stdc++.h>
#define int long long
using namespace std;
const int INF=0x3f3f3f3f3f3f3f3f;
int a[210][210];
int val[210];
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	int n,m;cin>>n>>m;
	memset(a,0x3f,sizeof a);
	for(int i=0;i<=n;i++) a[i][i]=0;
	for(int i=0;i<m;i++){
		int t1,t2,v;cin>>t1>>t2>>v;
		a[t1][t2]=a[t2][t1]=min(a[t1][t2],v);
	}
	int cnt=0;
	int Q;cin>>Q;for(int q=0;q<Q;q++){
		int nn;cin>>nn;
		vector<int> path;path.push_back(0);
		for(int i=0,t;i<nn;i++) cin>>t,path.push_back(t);
		path.push_back(0);
		int res=0;
		set<int> st;
		for(int i=1;i<=nn;i++){
			if(st.count(path[i])) {
				val[q]=res=-1;
				break;
			}
			st.insert(path[i]);
		}
		if(res==-1) continue;
		for(int i=1;i<=n;i++){
			if(!st.count(i)) {
				val[q]=res=-1;
				break;
			}
		}
		if(res==-1) continue;
		for(int i=0;i<(int)path.size()-1;i++){
			if(a[path[i+1]][path[i]]==INF){
				res=-1;
				break;
			}
			res+=a[path[i+1]][path[i]];
		}
		val[q]=res;
	}
	int mx=INF,pos=-1;
	for(int i=0;i<Q;i++){
		if(val[i]==-1) continue;
		++cnt;
		if(mx>val[i]){
			mx=val[i];
			pos=i;
		}
		
	}
	cout<<cnt<<endl<<pos+1<<" "<<val[pos]<<endl;
	return 0;
}
