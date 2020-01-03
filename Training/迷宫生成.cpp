#include <bits/stdc++.h>
using namespace std;
#define m 48//row
#define n 48 
#define down 1
#define right 2
#define left 4
#define up 8
vector <int> block_row;
vector <int> block_column;
vector <int> block_direct;
struct point{
 int x;
 int y;
}start,end;
int x_num=1,y_num=1;
int a[100][100];
void init(){//����ͼȫ����1=wall
 for(int i=0;i<=m+1;i++){
  for(int j=0;j<=n+1;j++){
   a[i][j]=1;//wall
  }
 }
 a[1][1]=2;
 start.x=1;//������ʼ��
 start.y=1;
}
void push_into_vec(int x,int y,int direct){//��һ�����ݴ�Ž�����vector������
 block_row.push_back(x);
 block_column.push_back(y);
 block_direct.push_back(direct);
}
int count(){//���㵱ǰλ����Χ ǽ�ĸ���
 int cnt=0;
 if(x_num+1<=m){
  push_into_vec(x_num+1,y_num,down);
  cnt++;
 } //down
 if(y_num+1<=n){
  push_into_vec(x_num,y_num+1,right);
  cnt++;
 } //right
 if(x_num-1>=1){
  push_into_vec(x_num-1,y_num,up);
  cnt++;
 } //up
 if(y_num-1>=1){
  push_into_vec(x_num,y_num-1,left);
  cnt++;
 } //left
 return cnt;
}
int main(){
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
 init();
 srand((unsigned)time(NULL));//���������
 count();
 while(block_row.size()){//��һ��ѹ������ǽ������ұߺ�������棩����ѭ��
  int num=block_row.size();
  int randnum=rand()%num;//����0-num-1֮����������ͬʱҲ��vector����±�
  x_num=block_row[randnum];
  y_num=block_column[randnum];
  switch(block_direct[randnum]){//ѡ��һ��������к�����������ʼ�� �ڿ� Ŀ��� ����������ͬһֱ���� ����ƶ���Ŀ����λ��
   case down:{
    x_num++;
    break;
   }
   case right:{
    y_num++;
    break; 
   }
   case left:{
    y_num--;
    break;
   }
   case up:{
    x_num--;
    break;
   }
  }
  if(a[x_num][y_num]==1){//Ŀ��������ǽ
   a[block_row[randnum]][block_column[randnum]]=2;//��ͨǽ
   a[x_num][y_num]=2;//��ͨĿ���
   count();//�ٴμ��㵱ǰλ����Χ����ǽ�����������vector
  }   
  block_row.erase(block_row.begin()+randnum);//ɾ�����ǽ(���ò��˵�ǽɾ�ˣ�������Щ�Ѿ�ʩ�����˲�����ʩ���ˣ�ͬʱҲ��ȷ������������ѭ��)
  block_column.erase(block_column.begin()+randnum);
  block_direct.erase(block_direct.begin()+randnum);
 }
 for(int i=0;i<=m+1;i++){
  for(int j=0;j<=n+1;j++){
   if(i==start.x&&j==start.y){
    printf("s ");
   }
   else if(a[i][j]==2){
    printf("0 ");
   }
   else{
    printf("1 "); 
   }
  }
  printf("\n");
 }
 return 0;
}
