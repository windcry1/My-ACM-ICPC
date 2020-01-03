/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/5/2019 11:08:19 PM
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
int a[100010],b[100010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
    while(T--){
    	int n,m;
        int MAX = 0,maxx = -MMAX,cnt = 0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>a[i]>>b[i];
            MAX = max(MAX,a[i]);
            maxx = max(maxx,a[i]-b[i]);
        }
        if(maxx <= 0) {
			cout<<-1<<endl;
			continue;
		}
        cnt = (m-MAX+maxx-1)/maxx;
        cout<<cnt+1<<endl;
    }
	return 0;
}

