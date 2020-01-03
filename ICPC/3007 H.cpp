/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/14/2019 1:25:46 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
struct node{
	string name;
	int card[5];
	int type=0;
	inline bool operator <(const node &a) const{
		if(type>a.type) return true;
		else if(type==a.type){
			if(type==8)
				return name<a.name;
			else if(type==7)
				return card[4]>a.card[4]||(card[4]==a.card[4]&&name<a.name);
			else if(type==6)
			{
				map<int,int> ma1,ma2;
				for(int i=0;i<5;i++){
					ma1[card[i]]++;
					ma2[a.card[i]]++;
				}
				int t4,t1,ta4,ta1;
				for(auto i:ma1){
					if(i.second==4) t4=i.first;
					if(i.second==1) t1=i.first;
				}
				for(auto i:ma2){
					if(i.second==4) ta4=i.first;
					if(i.second==1) ta1=i.first;
				}
				return t4>ta4||(t4==ta4&&t1>ta1)||(t4==ta4&&t1==ta1&&name<a.name);
			}
			else if(type==5)
			{
				map<int,int> ma1,ma2;
				for(int i=0;i<5;i++){
					ma1[card[i]]++;
					ma2[a.card[i]]++;
				}
				int t3,t2,ta3,ta2;
				for(auto i:ma1){
					if(i.second==3) t3=i.first;
					if(i.second==2) t2=i.first;
				}
				for(auto i:ma2){
					if(i.second==3) ta3=i.first;
					if(i.second==2) ta2=i.first;
				}
				return t3>ta3||(t3==ta3&&t2>ta2)||(t3==ta3&&t2==ta2&&name<a.name);
			}
			else if(type==4)
			{
				map<int,int> ma1,ma2;
				for(int i=0;i<5;i++){
					ma1[card[i]]++;
					ma2[a.card[i]]++;
				}
				int t3,ta3,sum1=0,sum2=0;
				for(auto i:ma1){
					if(i.second==3) t3=i.first;
					else sum1+=i.first;
				}
				for(auto i:ma2){
					if(i.second==3) ta3=i.first;
					else sum2+=i.first;
				}
				return t3>ta3||(t3==ta3&&sum1>sum2)||(t3==ta3&&sum1==sum2&&name<a.name);
			}
			else if(type==3)
			{
				map<int,int> ma1,ma2;
				for(int i=0;i<5;i++){
					ma1[card[i]]++;
					ma2[a.card[i]]++;
				}
				int pa1[2],pa2[2],cnt1=0,cnt2=0,d1,d2;
				for(auto i:ma1){
					if(i.second==2) pa1[cnt1++]=i.first;
					else d1=i.first;
				}
				for(auto i:ma2){
					if(i.second==2) pa2[cnt2++]=i.first;
					else d2=i.first;
				}
				return pa1[1]>pa2[1]||(pa1[1]==pa2[1]&&pa1[0]>pa2[0])||(pa1[1]==pa2[1]&&pa1[0]==pa2[0]&&d1>d2)||(pa1[1]==pa2[1]&&pa1[0]==pa2[0]&&d1==d2&&name<a.name);
			}
			else if(type==2)
			{
				map<int,int> ma1,ma2;
				for(int i=0;i<5;i++){
					ma1[card[i]]++;
					ma2[a.card[i]]++;
				}
				int t2,ta2,sum1=0,sum2=0;
				for(auto i:ma1){
					if(i.second==2) t2=i.first;
					else sum1+=i.first;
				}
				for(auto i:ma2){
					if(i.second==2) ta2=i.first;
					else sum2+=i.first;
				}
				return t2>ta2||(t2==ta2&&sum1>sum2)||(t2==ta2&&sum1==sum2&&name<a.name);
			}
			else if(type==1){
				int cnt1=0,cnt2=0;
				for(int i=0;i<5;i++)
					cnt1+=card[i],cnt2+=a.card[i];
				return cnt1>cnt2||(cnt1==cnt2&&name<a.name);
			}
		}
		return false;
	}
}a[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a[i].name;string temp;cin>>temp;
			int cnt=0;
			for(int j=0;j<temp.length();j++){
				if(temp[j]=='A')
					a[i].card[cnt++]=1;
				else if(temp[j]=='J')
					a[i].card[cnt++]=11;
				else if(temp[j]=='Q')
					a[i].card[cnt++]=12;
				else if(temp[j]=='K')
					a[i].card[cnt++]=13;
				else if(temp[j]=='1')
					a[i].card[cnt++]=10,j++;
				else a[i].card[cnt++]=(int)(temp[j]-'0');
			}
			sort(a[i].card,a[i].card+5);
			if(a[i].card[0]==1&&a[i].card[1]==10&&a[i].card[2]==11&&a[i].card[3]==12&&a[i].card[4]==13)
				a[i].type=8;
			else{
				bool flag=false;
				for(int j=1;j<5;j++)
					if(a[i].card[j]!=a[i].card[j-1]+1) flag=true;
				if(!flag)
					a[i].type=7;
				else if((a[i].card[0]==a[i].card[1]&&a[i].card[0]==a[i].card[2]&&a[i].card[0]==a[i].card[3])||(a[i].card[1]==a[i].card[2]&&a[i].card[1]==a[i].card[3]&&a[i].card[1]==a[i].card[4]))
					a[i].type=6;
				else if((a[i].card[0]==a[i].card[1]&&a[i].card[0]==a[i].card[2]&&a[i].card[3]==a[i].card[4])||(a[i].card[0]==a[i].card[1]&&a[i].card[2]==a[i].card[3]&&a[i].card[2]==a[i].card[4]))
					a[i].type=5;
				else if((a[i].card[0]==a[i].card[2]&&a[i].card[0]==a[i].card[1])||(a[i].card[1]==a[i].card[2]&&a[i].card[2]==a[i].card[3])||(a[i].card[2]==a[i].card[3]&&a[i].card[3]==a[i].card[4]))
					a[i].type=4;
				else if((a[i].card[0]==a[i].card[1]&&a[i].card[2]==a[i].card[3])||(a[i].card[0]==a[i].card[1]&&a[i].card[3]==a[i].card[4])||(a[i].card[1]==a[i].card[2]&&a[i].card[3]==a[i].card[4]))
					a[i].type=3;
				else if(a[i].card[0]==a[i].card[1]||a[i].card[1]==a[i].card[2]||a[i].card[2]==a[i].card[3]||a[i].card[3]==a[i].card[4])
					a[i].type=2;
				else a[i].type=1;
			}
		}
		sort(a,a+n);
		for(int i=0;i<n;i++) cout<<a[i].name<<endl;
	}
	return 0;
}

