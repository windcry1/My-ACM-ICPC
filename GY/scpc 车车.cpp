#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
//#include<bits/stdc++.h>
//using namespace std;
int main(){
	//freopen("C:\\Users\\LENOVO\\Desktop\\1.in","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll a;
	while(~scanf("%lld",&a)){
	ll e=1,b,c=1,d,res1=1,res2=1;
	b=a-3;
	if(b>0){
	for(int i=1;i<=b;i++){
		c=c*4;}
	}
	res1=2*4*3*c;
	d=a-4;
	if(d>0){
		for(int i=1;i<=d;i++){
			e=e*4;
		}
	}
	res2=4*3*3*e;
	if(a==3) res2=0;
	printf("%lld\n",res1+res2);}
    return 0;
}
