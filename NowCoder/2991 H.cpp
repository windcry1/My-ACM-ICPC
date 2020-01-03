/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/31/2019 2:51:30 PM
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
struct node
{
    int hp,atk,num;
    inline bool operator <(const node &a) const{
    	return num*a.atk < atk*a.num;
	}
}x;
inline int fun(int k)
{
    int s = 1, count = 0;
    while (k > 0)
    {
        count++;
        k -= s;
        s++;
    }
    return count;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	for(int i=0;i<T;i++){
		int n;cin>>n;
        node a[n];
        for (int j=0;j<n;j++) cin>>a[j].hp>>a[j].atk,a[j].num = fun(a[j].hp);
        sort(a,a+n);
        ll sum=0,res=0;
        for (int j=0;j<n;j++)
            res+=a[j].num,sum += res*a[j].atk;
        cout<<"Case #"<<i+1<<": "<<sum<<endl;
	} 
	return 0;
}

