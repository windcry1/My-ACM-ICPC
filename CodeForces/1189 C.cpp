//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int A[100100];
int BIT[100100];
int MAX_N,m;
int lowbit(int x)
{
    return x&(-x);
}
void build()
{ 
    for (int i = 1; i <= MAX_N; i++)
    {
        BIT[i] = A[i - 1];
        for (int j = i - 2; j >= i - lowbit(i); j--)
            BIT[i] += A[j];
    }
}
void edit(int i, int delta)
{
    for (int j = i; j <= MAX_N; j += lowbit(j))
        BIT[j] += delta;
}
int sum (int k)
{
    int ans = 0;
    for (int i = k; i > 0; i -= lowbit(i))
        ans += BIT[i];
    return ans;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>MAX_N;
	for(int i=0;i<MAX_N;i++)
		cin>>A[i];
	build();
	cin>>m;
	int a,b;
	while(m--)
	{
		cin>>a>>b;
		int p=sum(b)-sum(a-1);
		cout<<p/10<<endl;
	}
 	return 0;
}

