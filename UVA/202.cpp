#include <cstdio>
#include <iostream>
#include <set>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
using namespace std;
#define INF 0x3f3f3f3f
using ll=long long;
const int maxn= 3e3 +9;
int r[maxn],u[maxn],a,b;
int main()
{
	freopen("G:\\LOL\\UVA\\3.in","r",stdin);
	freopen("G:\\LOL\\UVA\\3.out","w",stdout);
    while(~scanf("%d%d",&a,&b)){
        int aa=a;
        memset(u,0,sizeof(u));
        memset(r,0,sizeof(r));
        int cnt=0;
        r[cnt++]=a/b;
        a=a%b;
        while(!u[a]&&a){
            u[a]=cnt;
            r[cnt++]=10*a/b;
            a=10*a%b;
        }
        printf("%d/%d = %d.",aa,b,r[0]);
        for(int i=1;i<cnt&&i<=50;i++){
            if(i==u[a])printf("(");
            printf("%d",r[i]);
        }
        if(cnt>50) printf("...");
        if(!a) printf("(0"),cnt=u[a]+1;
        printf(")\n");
        printf("%d = number of digits in repeating cycle\n",cnt-u[a]);
    }
    return 0;
}
