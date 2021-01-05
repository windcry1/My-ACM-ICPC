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
int a[100010],res[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	stack<int> st;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(st.empty()||a[st.top()]>=a[i]){
			st.push(i); 
		}
		else{
			while(!st.empty()&&a[st.top()]<a[i]){
				int top=st.top();
				st.pop();
				res[top]=min(i,top+a[top]+1);
			}
			st.push(i);
		}
	}
	for(int i=n;i>=1;i--)
		if(res[i]==0) res[i]=n+1;
	for(int i=1;i<=n;i++) if(res[i]!=0) cout<<min(res[i]-i-1,a[i])<<" "; 
    return 0;
}

