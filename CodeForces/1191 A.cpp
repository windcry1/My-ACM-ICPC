/*************************************************************************
	> File Name: 1191 A.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 10:35:33 PM
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
	if(n%4==0)
		cout<<1<<" A"<<endl;
	if(n%4==1)
		cout<<0<<" A"<<endl;
	if(n%4==2)
		cout<<1<<" B"<<endl;
	if(n%4==3)
		cout<<"2 A"<<endl;
    return 0;
}
