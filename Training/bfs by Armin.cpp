//Author：Armin
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repd(i,a,n) for(int i=n-1;i>=a;i--)
#define CRL(a,x) memset(a,x,sizeof(a))
const int N=7;

int M_x[4]={1,0,-1,0},
    M_y[4]={0,1,0,-1},Map[N][N];

struct node{int x,y,per;}Way[1005];//记录走过的路的数组   xy:坐标   per:前一步的下标

void Print(int x){
    if(Way[x].per!=-1) Print(Way[x].per);       //如果没到第一步就先输出前一步
    printf("(%d, %d)\n",Way[x].x-1,Way[x].y-1); //输出当前步
}

void bfs(){
    int Front=-1,rear=0; //初始化
    Way[++Front]=(node{1,1,-1});//第一步从（1,1）出发   //第一步的前面一步是-1

    while(Front<=rear){                 //队列还有值
        rep(i,0,4){                     //四个方向都走一下
            int X=Way[Front].x+M_x[i];  //走一步后的坐标
            int Y=Way[Front].y+M_y[i];
            if(Map[X][Y]) continue;     //如果走一步到的地方不可以走
            Map[X][Y]=1;                //走过的标记一下
            Way[++rear]=(node{X,Y,Front});  //++rear: 总步数+1   X,Y,:新的这步的坐标  //Front:新的这步的前面这步是当前这步
            if(X==5&&Y==5) return Print(rear);  //如果到达 ,打印路径、return
        }
        ++Front;//！！关键点：因为front和rear都是queue的下标，我们在queue[front]
	}            //这个地方找了四个方向，假设都可以走，我们就把它们四个放到 queue数组的最后，如果是
}               //第front是1，也就是第一步开始找，那么下面我们就要站到走了一步后的那个地方再找他们的四个方向，
               //也就是 queue[2]，queue[3]，queue[4]，queue[5]是我们走第一步能到达的地方，我们把front++；就可以依次
			  //找完这4个地方再走一步到的地方，放到 queue数组的最后，一直循环，直到找到为止。

int main()
{
    CRL(Map,-1);//初始化:用一圈墙围起来，这样就不用单独判断边界
    rep(i,1,6)
        rep(j,1,6)
            scanf("%d",&Map[i][j]);
    bfs();
    return 0;
}
