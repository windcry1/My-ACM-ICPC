 #include <stdio.h>
 int main()
 {
 	int N,sum=1,i;
 	scanf("%d",&N);
 	if(N<=12 && N>=0)
	{
	 	for(i=1;i<=N;i++)
 	{
	 	sum=sum*i;
	}
	 printf ("%d\n",sum);
 	}
 	if(N<0 || N>12)
	 printf("shuruwuxiao!\n") ;
	 return 0;
 }
 
