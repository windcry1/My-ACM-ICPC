//Author:LanceYu
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
int a[10010],HASH[100010];
bool flag[100010];
int main()
{
    int n;
    scanf("%d",&n);
    int i,MIN=MMAX,MAX=0;
    memset(HASH,0,sizeof(HASH));
    memset(flag,0,sizeof(flag));
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<MIN)
			MIN=a[i];
        if(a[i]>MAX)
			MAX=a[i];
        HASH[a[i]]=1;
        flag[a[i]]=1;
    }

    int temp=1;//放入HASH
    for(i=1;i<=MAX;i++)
        if(HASH[i]==1)
            HASH[i]=a[temp++];

    int res=0,j;
    int sum1,sum2,sum,tmin;
    for(i=1;i<=MAX;i++)
    {
        if(HASH[i]==i||flag[i]==0)
			continue;
        j=i;
        sum1=0,sum2=0,sum=0,tmin=j;
        flag[j]=0;
        temp=1;
        sum+=j;
        while(flag[HASH[j]])//寻找该放在这个位置的 
        {
            j=HASH[j];
            flag[j]=0;
            if(tmin>j)tmin=j;
            sum+=j;
            temp++;
        }
        sum1=sum+(temp-2)*tmin;//两两交换 
        sum2=sum+tmin+(temp+1)*MIN;//转接一下 
        res+=min(sum1,sum2);
    }
    printf("%d\n",res);
    return 0;
}

