/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/31/2019 1:36:38 AM
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
unordered_map <string,ll> F;
string a[7];
ll n,ans,Ans;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
    Ans=n*(n-1)/2;
    while(n--){
        for(int i=1;i<=5;i++) cin>>a[i];
        sort(a+1,a+6);//??????
        ans=0;
        for(int i=1;i<32;i++){
            int cnt=0;string s="";
            for(int j=1;j<=5;j++){
                if(i&(1<<(j-1))) cnt++,s+=a[j]+",";//?,??????
            }
            if(cnt&1) ans+=F[s]++;
            else ans-=F[s]++;
        }
        Ans-=ans;//???????????
    }
    printf("%lld\n",Ans);
 	return 0;
}

