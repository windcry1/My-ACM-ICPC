/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 12:06:53 AM
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
#include<unistd.h>
#include<thread>
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
	string name;
	int score;
}x[21]; 
void f(int n)
{
	usleep((100-unsigned(x[n].score))*100);
	cout<<x[n].name<<" "<<x[n].score<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n; 
	thread thr[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i].name>>x[i].score;
		thr[i]=thread(f,i);
	}
//	cout<<"Start Sleep Sort"<<endl;
	for(auto &t:thr)
		t.join();
//	cout<<endl; 
//	cout<<"End Sleep Sort"<<endl;
	return 0;
}

