#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
 {
 	int num,l;
	char a[100];
 	scanf("%d",&num);
	getchar();
	for(int j=0;j<num;j++)
	{
	gets(a);
 	//num=atoi(a);
	l=strlen(a);
	for(int i=0;i<l;i++)
	{
        if(a[i]=='z')
 		a[i]='a';
 		else if(a[i]>='a'&&a[i]<='y')
		a[i]=a[i]+1;
 	    else if(a[i]=='Z')
 		a[i]='A'; 
 		else if(a[i]>='A'&&a[i]<='Y')
 		a[i]=a[i]+1;
 	}
	  printf("%s\n",a);
}
 	return 0;
}
 
