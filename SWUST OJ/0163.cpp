/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 9:06:36 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node
{
    int x,y;
}x[5];
bool judge(node a,node b,node c,node d)
{
    if(min(a.x,b.x)>max(c.x,d.x)||min(a.y,b.y)>max(c.y,d.y)||min(c.x,d.x)>max(a.x,b.x)||min(c.y,d.y)>max(a.y,b.y))
    return false;
    double u,v,w,z;
	u=(c.x-a.x)*(b.y-a.y)-(b.x-a.x)*(c.y-a.y);//c.b.a//u的正负表示bc在ab的顺时针方向还是逆时针方向.
    v=(d.x-a.x)*(b.y-a.y)-(b.x-a.x)*(d.y-a.y);//d.b.a//同理
    w=(a.x-c.x)*(d.y-c.y)-(d.x-c.x)*(a.y-c.y);//a.d.c
    z=(b.x-c.x)*(d.y-c.y)-(d.x-c.x)*(b.y-c.y);//b.d.c
    return (u*v<=0 && w*z<=0);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		cin>>x[0].x>>x[0].y>>x[1].x>>x[1].y>>x[2].x>>x[2].y>>x[3].x>>x[3].y;
		cout<<(judge(x[0],x[1],x[2],x[3])?"True":"False")<<endl;
	}
	return 0;
}

