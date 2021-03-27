/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 2021/3/27 15:29:52
*************************************************************************/
//#pragma GCC optimize(2)
//#pragma GCC diagnostic error "-std=c++11"
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
#include <numeric>
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define int long long
#define ull unsigned long long
using namespace std;
string s1,s2;
int n1,n2;
int cal(string s1,string s2){
	int dp[n1+1][n2+1];
	for(int i=0;i<=n1;i++) dp[i][0]=i;
	for(int i=0;i<=n2;i++) dp[0][i]=i;
	for(int i=1;i<=n1;i++){
		for(int j=1;j<=n2;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1];
			}else{
				dp[i][j]=min(dp[i-1][j-1]+2,min(dp[i-1][j],dp[i][j-1])+1);
			}
		}
	}
	return dp[n1][n2];
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>s1>>s2;
	n1=s1.size();
	n2=s2.size();
	int t=cal(s1,s2);
	cout<<fixed<<setprecision(2)<<(double)(n1+n2-t)/(double)(n1+n2)<<endl;
	return 0;
}


