/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/12/2019 11:41:26 PM
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
bitset<1010> bt[1010],temp,res;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++)bt[i][j]=(s[j]=='1');
    }
    int T;cin>>T;
    while(T--){
    	int ans=0;
    	string s;cin>>s;
		for(int i=0;i<m;i++){
            if (s[i]=='_') res[i]=temp[i]=0;
            else res[i]=1,temp[i]=(s[i]=='1');
        }
        for(int i=0;i<n;i++){
            if((bt[i]&res)==temp) ans++;
        }
        cout<<ans<<endl;
	}
	return 0;
}

