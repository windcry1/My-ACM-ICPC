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
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
string s;
int a[2010],c[2000];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>s;
	int cont=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='P') {
			cont++;
			a[cont]=i;
		}
	}
	if(cont==0&&s.size()>=3){
		cout<<1<<endl;
	}
	else if(cont==1){
		if(a[cont]>=1&&(s.size()-1-a[cont])>=1){
			if(a[cont]>=4||(s.size()-1-a[cont])>=3) cout<<2<<endl;
			else cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	else{
		for(int i=2;i<=cont;i++){
			c[i]=a[i]-a[i-1]-1;
		}
		c[1]=a[1];
		c[cont+1]=s.size()-1-a[cont];
		int flag=0;
		for(int i=2;i<=cont;i++){
			if(c[i]==1&&c[i+1]==1){
				c[i]++;flag=1;
			}
		}
		int sum=0;
		for(int i=2;i<=cont;i++){
			if(c[i]>=2) sum++;
		}
		if(c[1]>=2) sum++;
		if(c[cont+1]>=1) sum++;
		if(flag=1){
			cout<<sum<<endl;
		}
		else{
			int flag2=0;
			for(int i=2;i<=cont;i++){
				if(c[i]>3) sum++;flag2=1;
			}
			if(flag2=1) cout<<sum<<endl;
			if(flag2=0){
				if(c[1]>=4||c[cont+1]>=3) sum++;
				cout<<sum<<endl;
			}
		}
	}
    return 0;
} 
