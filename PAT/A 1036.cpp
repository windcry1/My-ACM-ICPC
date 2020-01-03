/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 3:48:50 PM
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
	string name,id;
	char sex;
	int score;
	bool operator <(const node &a)const{
		return sex<a.sex||sex==a.sex&&score<a.score;
	}
}x[101010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i].name>>x[i].sex>>x[i].id>>x[i].score;
	sort(x,x+n);
	int f1=0,t1=-1,t2=-1;
	for(int i=0;i<n;i++)
	{
		if(!f1&&x[i].sex=='M')
			f1=1,t1=i;
		if(x[i].sex=='F')
			t2=i;
	}
	if(t1!=-1&&t2!=-1)
	{
		cout<<x[t2].name<<" "<<x[t2].id<<endl;
		cout<<x[t1].name<<" "<<x[t1].id<<endl;
		cout<<x[t2].score-x[t1].score<<endl;
	}
	else
	{
		if(t2==-1)
			cout<<"Absent"<<endl;
		else cout<<x[t2].name<<" "<<x[t2].id<<endl;
		if(t1==-1) cout<<"Absent"<<endl;
		else cout<<x[t1].name<<" "<<x[t1].id<<endl;
		cout<<"NA"<<endl;
	}
	return 0;
}

