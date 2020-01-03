/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 4:32:52 PM
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
int a[10010];
int cnt=0;
void NonRecursiveQuickSort(int *a,int len)
{
   stack<Region> regions;//定义一个栈变量
   Region region;
   region.low=0;
   region.high=len-1;
   regions.push(region);
   while(!regions.empty())
   {
     region=regions.top();
	 regions.pop();
     int p=Partition(a,region.low,region.high);
	 if(p-1>region.low)
	 {
		 Region regionlow;
		 regionlow.low=region.low;
		 regionlow.high=p-1;
		 regions.push(regionlow);
	 }
	 if(p+1<region.high)
	 {
		 Region regionhigh;
		 regionhigh.low=p+1;
		 regionhigh.high=region.high;
		 regions.push(regionhigh);
	 }
   }
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	reverse(a+1,a+1+n);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
				swap(a[i],a[j]),++cnt;
		}
	//InsertSort(a,n);
	cout<<cnt<<endl;
	//sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}

