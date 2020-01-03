//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int n,i,j,k;
ll sum[40][40];//sum:到每个节点的方法数目 
int map[40][40];
char s[40];
int main()
{
    while(scanf("%d",&n))
    {
    	if(n==-1)
    		return 0;
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            for(j=0;j<n;j++)
            {
                map[i][j]=s[j]-'0';//分离 
            }
        }
        memset(sum,0,sizeof(sum));
        sum[0][0]=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(!map[i][j]||!sum[i][j])
                    continue;
                if(i+map[i][j]<n)//不越界
                    sum[i+map[i][j]][j]+=sum[i][j];//能到这里的步数等于所有之和 
                if(j+map[i][j]<n)
                    sum[i][j+map[i][j]]+=sum[i][j];
            }
        }
        printf("%lld\n",sum[n-1][n-1]);
    }
    return 0;
}
