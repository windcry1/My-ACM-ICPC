/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 11/15/2019 8:01:39 PM
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
#include <sstream>
#include <fstream>
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
ostream& operator <<(ostream &out, pii &p){
	out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	in>>p.first>>p.second;
}
string s;
bool flag[200010];
int b[4];
int a[200010],tmp[200010];
ll MIN=MMAX,ans;
inline void _merge(int l,int m,int r)//?????
{
    int i=l,j=m+1,k=l;
    while(i<=m && j<=r){
        if(a[i]>a[j]){
            tmp[k++]=a[j++];//??????
            ans+=m-i+1;//??a[i]>a[j],i~m????????
        }
        else tmp[k++]=a[i++];//?????????????
    }
    while(i<=m)tmp[k++]=a[i++];//???????
    while(j<=r)tmp[k++]=a[j++];
    for(int i=l;i<=r;++i)
        a[i]=tmp[i];//???????a??
}
inline void _merge_sort(int l,int r)//????
{
    if(l<r){
        int m=(l+r)>>1;//?????
        _merge_sort(l,m);//???
        _merge_sort(m+1,r);//???
        _merge(l,m,r);//?????
    }
}
inline void dfs(int step){
	//cout<<"step: "<<step<<endl;
	if(step==4){
		for(int i=0;i<s.size();i++){
			if(s[i]=='A') a[i]=b[0];
			if(s[i]=='T') a[i]=b[1];
			if(s[i]=='C') a[i]=b[2];
			if(s[i]=='G') a[i]=b[3];
		}
		//cout<<1<<endl;
		ans=0;
		_merge_sort(0,s.size()-1);
		MIN=min(ans,MIN);
		return ;
	}
	for(int i=0;i<4;i++){
		if(!flag[i]) {
			flag[i]=true;
			b[step]=i;
			dfs(step+1);
			flag[i]=false;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>s;
	for(int i=0;i<4;i++){
		memset(flag,0,sizeof flag);
		flag[i]=1;
		b[0]=i;
		dfs(1);
	}
	cout<<MIN<<endl;
	return 0;
}

