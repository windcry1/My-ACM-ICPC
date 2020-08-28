#include<stdio.h>
#include<math.h>
#define N 5
#define M 6
double sim(int (*data)[M],int x,int y){
	int i;
	double avex=0,avey=0;//ƽ���� 
	for(i=0;i<M;i++){
		avex+=data[x][i];
		avey+=data[y][i];
	}
	avex/=M;//ƽ�������� 
	avey/=M;
	double a=0,b=0,c=0;//a:ʽ������Ĳ���, b:�������ʽ�Ӹ�������Ĳ���, c:�����ұ�ʽ�Ӹ�������Ĳ��� 
	for(i=0;i<M;i++){
		a+=(data[x][i]-avex)*(data[y][i]-avey);
		b+=(data[x][i]-avex)*(data[x][i]-avex); 
		c+=(data[y][i]-avey)*(data[y][i]-avey);
	}
	b=sqrt(b);//������ 
	c=sqrt(c);
	return a/b/c;
}
int main(){
	int data[N][M]={{3,45,182,304,473,687},{4,35,238,534,720,894},
	{2,15,123,597,891,1201},{11,68,392,521,783,821},{3,56,171,363,674,834}};//ԭʼ���� 
	int i,j;
	double now=0;//��¼���ֵ 
	int xx,yy;//��¼���ĵ������� 
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			printf("%d�ŵ�����%d�ŵ��������������",i+1,j+1);
			double temp=sim(data,i,j);//�����ʱ����
			printf("%.6lf\n",temp);//�������
			if(now<temp){//�������ֵ 
				now=temp;
				xx=i+1;
				yy=j+1;
			}
		}
	}
	printf("\n%d�ŵ�����%d�ŵ�����6���µ��ۼ�ȷ�﷢չ��������ơ�\n",xx,yy);
	return 0;
}          
