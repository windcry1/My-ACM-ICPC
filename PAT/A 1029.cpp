/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 6:47:20 PM
*************************************************************************/
#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<list>
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
list<int> st;
void debug()
{
	cout<<"debug: "<<endl;
	for(auto i:st)
		cout<<i<<endl;
	cout<<"end of debug"<<endl;
}
int main()
{
 	//ios::sync_with_stdio(false);
	//cin.tie(0);
    //cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		int f=0;
		auto j=st.begin();
		for(;j!=st.end();j++)
			if(*j>=t)
			{
				st.insert(j,t);
				f=1;
				break;
			}
		if(!f)
			st.push_back(t);
		//debug();
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		int f=0;
		auto j=st.begin();
		for(;j!=st.end();j++)
			if(*j>=t)
			{
				st.insert(j,t);
				f=1;
				break;
			}
		if(!f)
			st.push_back(t);
		//debug();
	}
	//sort(st.begin(),st.end());
	n=st.size();
	int cnt=0;
	for(auto i:st)
	{
		++cnt;
		if(cnt==(n+1)/2)
		{
			cout<<i<<endl;
			return 0;
		}
	}
 	return 0;
}

