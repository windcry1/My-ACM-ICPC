#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<char> op;
stack<int> s;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	int n;cin>>n;
	char c;
	for(int i=1,t;i<=n;i++) cin>>t,s.push(t);
	for(int i=1;i<n;i++) cin>>c,op.push(c);
	while(!op.empty()){
		int t1=s.top();s.pop();
		int t2=s.top();s.pop();
		char opt=op.top();op.pop();
		if(opt=='/') {
			if(t1==0){
				cout<<"ERROR: "<<t2<<"/"<<t1<<endl;
				return 0;
			}
			s.push(t2/t1);
		}
		if(opt=='*') s.push(t2*t1);
		if(opt=='-') s.push(t2-t1);
		if(opt=='+') s.push(t2+t1);
	}
	cout<<s.top()<<endl;
	return 0;
}
