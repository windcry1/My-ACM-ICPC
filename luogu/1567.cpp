/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/10/2019 9:22:13 PM
*************************************************************************/
#include<stdio.h>
int a[1000010];
int max(int a,int b){
	return (a<b?b:a);
}
int main(){
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int cnt=1,MAX=1;
	for(int i=1;i<n;i++){
		cnt=(a[i]>a[i-1]?cnt+1:1);
		MAX=max(MAX,cnt);
	}
	printf("%d\n",MAX);
	return 0;
}

