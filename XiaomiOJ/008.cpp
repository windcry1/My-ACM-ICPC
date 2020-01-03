//Author:LanceYu
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
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[500001];
int num,tmp[500001];
void merge(int l,int m,int r)
{
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
	{
        if(a[i]>a[j])
		{
            tmp[k++]=a[j++];
            num+=m-i+1;
        }
        else tmp[k++]=a[i++];
    }
    while(i<=m)
		tmp[k++]=a[i++];
    while(j<=r)
		tmp[k++]=a[j++];
    for(int i=l;i<=r;++i)
        a[i]=tmp[i];
}
void mergesort(int l,int r)
{
    if(l<r)
	{
        int mid=(l+r)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        merge(l,mid,r);
    }
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	int t,i=0;
	while(ss>>a[i++]);
	num=0;
    mergesort(0,i-2);
    printf("%lld\n",num);
 	return 0;
}

