#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[3][3];
int get(int x){
	switch(x){
		case 6:return 10000;
		case 7:return 36;
		case 8:return 720;
		case 9:return 360;
		case 10:return 80;
		case 11:return 252;
		case 12:return 108;
		case 13:return 72;
		case 14:return 54;
		case 15:return 180;
		case 16:return 72;
		case 17:return 180;
		case 18:return 119;
		case 19:return 36;
		case 20:return 306;
		case 21:return 1080;
		case 22:return 144;
		case 23:return 1800;
		case 24:return 3600;
	}
}
bool f[10];
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin>>a[i][j],f[a[i][j]]=1;
	for(int i=0;i<3;i++) for(int j=0;j<3;j++) if(!a[i][j]){
		for(int k=1;k<=9;k++){
			if(!f[k]) a[i][j]=k;
		}
	}
	for(int i=0;i<3;i++){
		int t1,t2;cin>>t1>>t2;cout<<a[t1-1][t2-1]<<endl;
	}
	int t;cin>>t;
	int res=0;
	if(t>=1 and t<=3)
		for(int i=0;i<3;i++)
			res+=a[t-1][i];
	if(t>=4 and t<=6)
		for(int i=0;i<3;i++)
			res+=a[i][t-4];
	if(t==7)
		for(int i=0;i<3;i++)
			res+=a[i][i];
	if(t==8)
		for(int i=0;i<3;i++)
			res+=a[2-i][i];
	cout<<get(res)<<endl;
	return 0;
}
