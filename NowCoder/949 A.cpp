/*************************************************************************
	> File Name: 949 A.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 8:45:45 PM
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
    //freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	int n;
	cin>>n;
	while(n!=0)
	{
		if(n%2)
		{
			cout<<"Yang"<<endl;
			return 0;
		}
		n/=2;
		if(n==1)
			break;
	}
	cout<<"Shi"<<endl;
    return 0;
}
