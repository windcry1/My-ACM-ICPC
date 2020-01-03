/*************************************************************************
	> File Name: 949 C.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 9:33:53 PM
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
int a[1010],b[1010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
    //freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(m--)
	{
		int p;
		cin>>p;
		int flag=0,cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>p)
				flag=1;
			else{
				if(flag){
					cnt++;
					flag=0;
				}
			}
		}
		if(flag==1)
			cnt++;
		cout<<cnt<<endl;
	}
    return 0;
}
