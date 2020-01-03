#include<stdio.h> 
#include<string.h> 
int main()  
{  
    char a[81],c;  
    int i=0,k=1,m=0,len;  
	scanf("%s",a);
	len=strlen(a);
    for(i=0;i<len;i++)
	{
	if(a[i]>='a'&&a[i]<='z')
        printf("%c",a[i]-32);    
    else if(a[i]>='A'&&a[i]<='Z')  
        printf("%c",a[i]+32);   
    else  
        printf("%c",a[i]);  }
    printf("\n"); 
	return 0; 
}
