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
#include<fstream>
#include<algorithm>
#define ll long long
using namespace std;
int vis1[210],vis2[210],vis3[210],vis4[210];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int x1,y1,x2,y2,x3,y3,x4,y4;
	int cnt=0;
	while(cin>>x1>>y1>>x2>>y2){
		++cnt;
		cin>>x3>>y3>>x4>>y4;
//		if(cnt==279){
//			cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
//		}
		memset(vis1,0,sizeof vis1);
		memset(vis2,0,sizeof vis2); 
		memset(vis3,0,sizeof vis3);
		memset(vis4,0,sizeof vis4); 
		x1+=100,x2+=100,y1+=100,y2+=100;
		x3+=100,x4+=100,y3+=100,y4+=100;
		for(int i=min(x1,x2);i<=max(x1,x2);i++){
			vis1[i]=1;
		}
		for(int i=min(x3,x4);i<=max(x3,x4);i++){
			vis2[i]=1;
		}
		int cnt1=0,cnt2=0,cnt3=0;
		for(int i=min(min(x1,x2),min(x3,x4));i<=max(max(x1,x2),max(x3,x4));i++){
			if(vis1[i]==1&&vis2[i]==1) cnt1++;
			else if(vis1[i]==1&&vis2[i]==0) cnt2++;
			else if(vis1[i]==0&&vis2[i]==1) cnt3++;
		}
		for(int i=min(y1,y2);i<=max(y1,y2);i++){
			vis3[i]=1;
		}
		for(int i=min(y3,y4);i<=max(y3,y4);i++){
			vis4[i]=1;
		}
		int cnt4=0,cnt5=0,cnt6=0;
		for(int i=min(min(y1,y2),min(y3,y4));i<=max(max(y1,y2),max(y3,y4));i++){
			if(vis3[i]==1&&vis4[i]==1) cnt4++;
			else if(vis3[i]==1&&vis4[i]==0) cnt5++;
			else if(vis3[i]==0&&vis4[i]==1) cnt6++;
		}
		if(cnt1>0&&cnt2>0&&cnt3>0&&cnt4>0&&cnt5>0&&cnt6>0||cnt1>0&&cnt2==0&&cnt3==0&&cnt4>0&&cnt5==0&&cnt6==0||((x1==x3||x1==x4||x2==x3||x2==x4)&&(cnt4>0))||((y1==y3||y1==y4||y2==y3||y2==y4)&&(cnt1>0))) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}

