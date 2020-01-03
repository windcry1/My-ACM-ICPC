/*************************************************************************
	> File Name: 949 E.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 9:40:17 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <bitset>
#include <complex>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <ctime>
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int MMAX = 0x7fffffff;
const int mod = 1e9+7;
int a[11][11];
set<int> s;
void dfs(int x,int y,int n,int m,int step)
{
	if(x==n&&y==m)
	{
		s.insert(step);
		return ;
	}
	if(x+1<=n)
		dfs(x+1,y,n,m,step+a[x+1][y]);
	if(y+1<=m)
		dfs(x,y+1,n,m,step+a[x][y+1]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
	//freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	dfs(0,0,n-1,n-1,a[0][0]);
	cout<<s.size()<<endl;
    return 0;
}
