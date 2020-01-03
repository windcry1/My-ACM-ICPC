//Author��Armin
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repd(i,a,n) for(int i=n-1;i>=a;i--)
#define CRL(a,x) memset(a,x,sizeof(a))
const int N=7;

int M_x[4]={1,0,-1,0},
    M_y[4]={0,1,0,-1},Map[N][N];

struct node{int x,y,per;}Way[1005];//��¼�߹���·������   xy:����   per:ǰһ�����±�

void Print(int x){
    if(Way[x].per!=-1) Print(Way[x].per);       //���û����һ���������ǰһ��
    printf("(%d, %d)\n",Way[x].x-1,Way[x].y-1); //�����ǰ��
}

void bfs(){
    int Front=-1,rear=0; //��ʼ��
    Way[++Front]=(node{1,1,-1});//��һ���ӣ�1,1������   //��һ����ǰ��һ����-1

    while(Front<=rear){                 //���л���ֵ
        rep(i,0,4){                     //�ĸ�������һ��
            int X=Way[Front].x+M_x[i];  //��һ���������
            int Y=Way[Front].y+M_y[i];
            if(Map[X][Y]) continue;     //�����һ�����ĵط���������
            Map[X][Y]=1;                //�߹��ı��һ��
            Way[++rear]=(node{X,Y,Front});  //++rear: �ܲ���+1   X,Y,:�µ��ⲽ������  //Front:�µ��ⲽ��ǰ���ⲽ�ǵ�ǰ�ⲽ
            if(X==5&&Y==5) return Print(rear);  //������� ,��ӡ·����return
        }
        ++Front;//�����ؼ��㣺��Ϊfront��rear����queue���±꣬������queue[front]
	}            //����ط������ĸ����򣬼��趼�����ߣ����ǾͰ������ĸ��ŵ� queue�������������
}               //��front��1��Ҳ���ǵ�һ����ʼ�ң���ô�������Ǿ�Ҫվ������һ������Ǹ��ط��������ǵ��ĸ�����
               //Ҳ���� queue[2]��queue[3]��queue[4]��queue[5]�������ߵ�һ���ܵ���ĵط������ǰ�front++���Ϳ�������
			  //������4���ط�����һ�����ĵط����ŵ� queue��������һֱѭ����ֱ���ҵ�Ϊֹ��

int main()
{
    CRL(Map,-1);//��ʼ��:��һȦǽΧ�����������Ͳ��õ����жϱ߽�
    rep(i,1,6)
        rep(j,1,6)
            scanf("%d",&Map[i][j]);
    bfs();
    return 0;
}
