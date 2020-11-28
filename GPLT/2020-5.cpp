#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	int a[4],limit,cha;for(int i=0;i<4;i++) cin>>a[i];
	cin>>limit>>cha;
	int cnt=0;
	int mx=*max_element(a,a+4);
	int pos=-1;
	for(int i=0;i<4;i++){
		if(abs(a[i]-mx)>cha) ++cnt,pos=i;
		else if(a[i]<limit) ++cnt,pos=i;
	}
	if(cnt==0) cout<<"Normal"<<endl;
	else if(cnt==1) cout<<"Warning: please check #"<<pos+1<<"!"<<endl;
	else cout<<"Warning: please check all the tires!"<<endl;
	return 0;
}
