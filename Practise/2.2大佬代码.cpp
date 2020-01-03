#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int n,m;
#define N 1000
char map[N][N];
int flog;
int dir[4][2]={0,1,0,-1,1,0,-1,0};              //����4������
struct node
{
    int x;
    int y;
    int step;
};
struct node e,s;
void bfs(int x,int y)                
{
    queue<node>q;
    s.x=x;
    s.y=y;
    s.step=0;
    q.push(s);
    map[s.x][s.y]='#';
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        if(map[s.x][s.y]=='r')        //����ҵ���ʹ�����ѡ������step����Ϊ��ͬʱ�������Ե�һ���ҵ���ʹ�����ѻ��Ĳ����ɶ�ʱ��С�ġ�
        {
            printf("%d\n",s.step);
            flog=1;
            break;
        }
        if(map[s.x][s.y]=='@')                   //����һ���µ��ַ���@����ʾ������ӡ�step++��
        {
            map[s.x][s.y]='#';
            s.step++;
            q.push(s);
            continue;
        }
        int i;
        for(i=0;i<4;i++)
        {
        e.x=s.x+dir[i][0];
        e.y=s.y+dir[i][1];
        if(e.x>=1&&e.x<=n&&e.y>=1&&e.y<=m&&map[e.x][e.y]!='#')      //�жϱ߽��λ����Ϣ
        {
            if(map[e.x][e.y]=='r')                                  //����������ѡ��������
            { 
                e.step=s.step+1;
                q.push(e);
            }
            if(map[e.x][e.y]=='.')                                //���ߵĻ���
            {
                map[e.x][e.y]='#';
                e.step=s.step+1;
                q.push(e);
            } 
            if(map[e.x][e.y]=='x')                           //������������x��Ϊ@���������һ�ξ��� �ˣ�
            {
                map[e.x][e.y]='@';
                e.step=s.step+1;
                q.push(e);
            }
        }
        }

    }
}
int main(){ int tx,ty; while(scanf("%d%d",&n,&m)!=EOF) { flog= 0;
 int i;
    for(i=1;i<=n;i++)
    {
        scanf("%s",map[i]+1);
    }
    int j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(map[i][j]=='a')
            {
                map[i][j]='.';              //�ҳ���ʼλ�á�
                tx=i;
                ty=j;
            }
        }
    }
    bfs(tx,ty);
    if(flog==0)
    {
        printf("Poor ANGEL has to stay in the prison all his life.\n");
    }
    }
    return 0;
}
