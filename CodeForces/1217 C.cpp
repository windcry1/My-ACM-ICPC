/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/5/2019 11:54:52 PM
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
int T;
int p[200010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
        memset(p,0,sizeof(p));
        string s;cin>>s;
        int len = s.length();
        int cnt = 0;
        for(int i=0;i<len;i++){
            if(s[i]=='0') cnt++;
            else p[i]=cnt,cnt=0;
        }
        ll res = 0;
        for(int i=0;i<len;i++){
            if(s[i]=='1'){
                int sum = 0,ans = 0;
                for(int j=i;j<min(len,i+30);j++){
                    sum = sum*2+(s[j]-'0');
                    if(sum - (j-i+1) <= p[i])
                        ans++;
                }
                res += ans;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}

