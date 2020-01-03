/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 6:38:50 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	string s;
	string name;
	int score;
}x[100010];
bool cmp1(const node &a,const node &b){
	return a.s<b.s;
}
bool cmp2(const node &a,const node &b){
	return a.name<b.name||a.name==b.name&&a.s<b.s;
}
bool cmp3(const node &a,const node &b){
	return a.score<b.score||a.score==b.score&&a.s<b.s;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>x[i].s>>x[i].name>>x[i].score;
	if(k==1)
	{
		sort(x,x+n,cmp1);
		for(int i=0;i<n;i++)
			cout<<x[i].s<<" "<<x[i].name<<" "<<x[i].score<<endl;
	}
	if(k==2)
	{
		sort(x,x+n,cmp2);
		for(int i=0;i<n;i++)
			cout<<x[i].s<<" "<<x[i].name<<" "<<x[i].score<<endl;
	}
	if(k==3)
	{
		sort(x,x+n,cmp3);
		for(int i=0;i<n;i++)
			cout<<x[i].s<<" "<<x[i].name<<" "<<x[i].score<<endl;
	}
 	return 0;
}

