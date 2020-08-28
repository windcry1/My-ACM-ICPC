#include<stdio.h>
#include<math.h>
#define N 5
#define M 6
double sim(int (*data)[M],int x,int y){
	int i;
	double avex=0,avey=0;//平均数 
	for(i=0;i<M;i++){
		avex+=data[x][i];
		avey+=data[y][i];
	}
	avex/=M;//平均数计算 
	avey/=M;
	double a=0,b=0,c=0;//a:式子上面的部分, b:下面左边式子根号里面的部分, c:下面右边式子根号里面的部分 
	for(i=0;i<M;i++){
		a+=(data[x][i]-avex)*(data[y][i]-avey);
		b+=(data[x][i]-avex)*(data[x][i]-avex); 
		c+=(data[y][i]-avey)*(data[y][i]-avey);
	}
	b=sqrt(b);//开根号 
	c=sqrt(c);
	return a/b/c;
}
int main(){
	int data[N][M]={{3,45,182,304,473,687},{4,35,238,534,720,894},
	{2,15,123,597,891,1201},{11,68,392,521,783,821},{3,56,171,363,674,834}};//原始数据 
	int i,j;
	double now=0;//记录最大值 
	int xx,yy;//记录最大的地区名字 
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			printf("%d号地区和%d号地区的相似情况：",i+1,j+1);
			double temp=sim(data,i,j);//结果暂时保存
			printf("%.6lf\n",temp);//输出数据
			if(now<temp){//更新最大值 
				now=temp;
				xx=i+1;
				yy=j+1;
			}
		}
	}
	printf("\n%d号地区和%d号地区近6个月的累计确诊发展情况最相似。\n",xx,yy);
	return 0;
}          
