#include    <stdio.h>
#define    N    4
int r[N][N];
void fun1(int (*a)[N],int x){
	int i,j,k;
	for(i=0;i<x;i++){
		int temp[N];
		for(j=0;j<N;j++)
			temp[j]=a[j][0];
		for(k=0;k<N-1;k++)
		for(j=0;j<N;j++){
			a[j][k]=a[j][k+1];
		}
		for(j=0;j<N;j++){
			a[j][N-1]=temp[j];
		}
	}
}
void fun2(int (*a)[N],int x){
	int i,j,k;
	for(i=0;i<x;i++){
		int temp[N];
		for(j=0;j<N;j++)
			temp[j]=a[j][N-1];
		for(k=N-1;k>0;k--)
		for(j=0;j<N;j++){
			a[j][k]=a[j][k-1];
		}
		for(j=0;j<N;j++){
			a[j][0]=temp[j];
		}
	}
}
main()
{  int t[][N]={25,33,14,28,19,42,57,48,39,53,39,34,27,40,77,61}, i, j, m, p;
   char ch;
   printf("原始矩阵:\n");
   for(i=0; i<N; i++)
   {  
       for(j=0; j<N; j++)
       printf("%2d  ",t[i][j]);
       printf("\n");
   }
   //在该行下补充菜单式的控制流程
   	while(1){
		printf("请输入你想转移的方向[左：1,右：2]: ");
		scanf("%d",&m);
		printf("请输入你想转移的步数：");
		scanf("%d",&p);
		if(m==1)
			fun1(t,p);
		if(m==2)
			fun2(t,p);
		printf("\n\n\n本次转移后的矩阵: \n");
		for(i=0; i<N; i++){  
			for(j=0; j<N; j++)
				printf("%2d  ",t[i][j]);
			printf("\n");
		}
		getchar();
		printf("退出请按Q键，继续请按其它任意键！");
		ch=getchar();
		if(ch=='Q' || ch=='q'){
			return 0;
		}
	}
	//在该行上补充菜单式的控制流程
}
