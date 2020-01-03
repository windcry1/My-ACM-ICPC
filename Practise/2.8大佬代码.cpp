#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>  
#include<queue>
using namespace std; 
int a,b,c,time;
int s[51][51][51];
int biaoji[51][51][51];
int dir[6][3]={0,0,1,0,0,-1,0,-1,0,0,1,0,1,0,0,-1,0,0};
struct wei
{
	int x;
	int y;
	int z;
	int t;
};
int sou()
{
	queue<wei>q;
	wei ss,tt;
	ss.x=0;
	ss.y=0;
	ss.z=0;
	ss.t=0;
	memset(biaoji,0,sizeof(biaoji));
	biaoji[ss.x][ss.y][ss.z]=1;
	q.push(ss);
	while(!q.empty())
	{
		tt=q.front();
		q.pop();
		if(tt.t>time)
		{
			return -1;
		}
		if(tt.x==a-1&&tt.y==b-1&&tt.z==c-1&&tt.t<=time)
		{
			return tt.t;
		}
		for(int i=0;i<6;i++)
		{
			ss=tt;
			ss.x+=dir[i][0];
			ss.y+=dir[i][1];
			ss.z+=dir[i][2];
			if(ss.x>=a||ss.x<0||ss.y>=b||ss.y<0||ss.z>=c||ss.z<0||s[ss.x][ss.y][ss.z]==1||biaoji[ss.x][ss.y][ss.z]==1)
			continue;
			biaoji[ss.x][ss.y][ss.z]=1;
			ss.t++;
			q.push(ss);
		}
	}
	return -1;
}
int main()
{
	int bbs,i,j,k;
	scanf("%d",&bbs);
	while(bbs--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&time);
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		for(k=0;k<c;k++)
		{
			scanf("%d",&s[i][j][k]);
		}
		if(s[a-1][b-1][c-1]||a+b+c-3>time)
        {
            printf("-1\n");
            continue;
        }
        if(a==1&&b==1&&c==1)
        {
            printf("0\n");
            continue;
        }
		int ans=sou();
		printf("%d\n",ans);
	}
	return 0;
}
