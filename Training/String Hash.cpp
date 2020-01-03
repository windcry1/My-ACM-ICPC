//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#include<unordered_set>
#include<unordered_map>
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const unsigned MAX_N=1e6+10;
const unsigned ll seed = 131;// 31 131 1313 13131 131313 etc..
unsigned ll Hash[2*MAX_N];
unsigned ll Hashnew[MAX_N];
unsigned ll p[MAX_N];
char T[2*MAX_N];
int n;
inline void BKDRHash(char *str)
{
	unsigned len=strlen(str);
    for(unsigned i=1;i<=len;i++)
        Hash[i] = Hash[i-1] * seed + (*str++);
}
inline void BKDRHashnew(char *str)
{
	unsigned len=strlen(str);
    for(unsigned i=1;i<=len;i++)
        Hashnew[i] = Hashnew[i-1] * seed + (*str++);
}
inline unsigned ll get(int l,int r,unsigned ll *hash)
{
	return hash[r]-hash[l-1]*p[r-l+1];
}
unordered_set<unsigned ll> st;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	p[0]=1;
	for(unsigned i=1;i<=MAX_N;i++)
		p[i] = p[i-1] * seed;
	cin>>T>>n;
	int lent=strlen(T);
	strcat(T,T);
	BKDRHash(T);
	for(int i=lent;i<2*lent;i++)
		st.insert(get(i-lent+1,i,Hash));
	int len;
	char s[MAX_N];
	while(n--)
	{
		cin>>s;
		len=strlen(s);
		BKDRHashnew(s);
		int ans=0;
		for(int i=lent;i<=len;i++)
			if(st.find(get(i-lent+1,i,Hashnew))!=st.end())
				ans++;
		cout<<ans<<endl;
	}
 	return 0;
}

