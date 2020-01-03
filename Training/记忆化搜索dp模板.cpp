#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<map>
#include<cstring>
#define INIT(a,b) memset(a,b,sizeof(a))
#define LL long long int
using namespace std;
const int MAX=0x7fffffff;
const int MIN=-0x7fffffff;
const int INF=0x3f3f3f3f;
const int Mod=1e9+7;
const int MaxN=1e7+7;
int Map[105][105];
int rem[105][105];//��¼�Ѵ�����Ľڵ�
int n;
int dfs(int x,int y)
{
    if(rem[x][y])
		return rem[x][y];//��ǰ�ڵ��Ѵ����
    if(x==n)
		return Map[x][y];//�߽��ж�
    rem[x][y]+=max(dfs(x+1,y),dfs(x+1,y+1))+Map[x][y];//���µݹ鲢�����������rem[x][y]
    return rem[x][y];
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
	{
        scanf("%d",&n);
        memset(rem,0,sizeof(rem));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++)
                scanf("%d",&Map[i][j]);
        printf("%d\n",dfs(1,1));
    }
return 0;

