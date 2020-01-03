/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
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
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const ull seed=131;
ull Hash1[200010],Hash2[200010],p[200010];
inline void BKDRHash(string str1,string str2)
{
	unsigned len1=str1.length();
    for(unsigned i=1;i<=len1;i++)
        Hash1[i] = Hash1[i-1] * seed + (str1[i-1]);
    unsigned len2=str2.length();
    for(unsigned i=1;i<=len2;i++)
        Hash2[i] = Hash2[i-1] * seed + (str2[i-1]);
}
inline unsigned ll get(int l,int r,unsigned ll *hash)
{
	return hash[r]-hash[l-1]*p[r-l+1];
}
int lcs(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    int result = 0;
    int c[len1+1][len2+1];
    for (int i = 0; i <= len1; i++) {
        for( int j = 0; j <= len2; j++) {
            if(i == 0 || j == 0) {
                c[i][j] = 0;
            } else if (str1[i-1] == str2[j-1]) {
                c[i][j] = c[i-1][j-1] + 1;
                result = max(c[i][j], result);
            } else {
                c[i][j] = 0;
            }
        }
    }
    return result;
}
inline void init()
{
	p[0]=1;
	for(auto i=1;i<200010;i++)
		p[i] = p[i-1] * seed;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	init();
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	string rs1(s1.rbegin(),s1.rend()),rs2(s2.rbegin(),s2.rend());
	BKDRHash(s1,rs2);
	int MAX=0;
	for(auto i=0;i<n;i++)
		for(auto j=i;j+j-i<n;j++)
			if(get(i+1,j+1,Hash1)==get(n-j-j+i,n-j,Hash2))
				MAX=max(MAX,(j-i+1)*2);
	cout<<max(MAX,max(lcs(s1,rs1),lcs(s2,rs2)))<<endl;
 	return 0;
}

