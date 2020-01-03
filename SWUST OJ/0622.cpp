/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/12/2019 5:45:37 PM
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
	string id,name;
	int by,bm,bd;
	string pos;
}x[101];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i].id>>x[i].name>>x[i].by>>x[i].bm>>x[i].bd>>x[i].pos;
	string s;cin>>s;
	for(int i=0;i<n;i++)
	{
		if(x[i].name==s)
		{
			cout<<"ID:"<<x[i].id<<endl;
			cout<<"name:"<<x[i].name<<endl;
			cout<<"birthday:"<<x[i].by<<"/"<<x[i].bm<<"/"<<x[i].bd<<endl;
			cout<<"position:"<<x[i].pos<<endl;
			return 0;
		}
	}
	cout<<"NO THIS PERSON!"<<endl;
	return 0;
}

