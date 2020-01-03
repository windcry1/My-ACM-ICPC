#include<stdio.h>
int main()
{
	int i=0;
	printf("the initial value of i is: %d\n",i);
	printf("value ++i is:%d\nvalue i after ++ is:%d\n",++i,i);
	i=0;
	printf("value i++ is:%d\nvalue i after ++ is:%d\n\n",i++,i);
	printf("the initial value of i is:%d\n",i);
	printf("value --i is:%d\nvalue i after -- is:%d\n",--i,i);
	printf("value i-- is:%d\nvalue i after -- is:%d\n",i--,i);
	return 0;
 } 
