#include <stdio.h>  
#include <string.h>  
int main()  
{  
    while(1)
    {
	char m[201]={'0'},n[201]={'0'};  
    int i,lenm,lenn,lenmax,k,j;  
    int a[201]={0},b[201]={0},c[201]={0};  
    scanf("%s",m);  
    lenm =strlen(m);  
    for(i=0;i<=lenm -1;i++)  
      a[i]=m[lenm -1 -i]-'0';  
    scanf("%s",n);  
    lenn=strlen(n);  
    for(i=0;i<=lenn -1;i++)  
        b[i]=n[lenn -1 -i]-'0';  
    if(lenm>lenn)  
        lenmax=lenm;  
    else  
        lenmax=lenn;  
    k=0;  
    for(i=0;i<=lenmax -1;i++)  
    {  
        c[i]=(a[i]+b[i]+k)%10;  
        k=(a[i]+b[i]+k)/10;  
    }  
    if(k!=0)
	c[lenmax]=1;  
    if(c[lenmax]==1)   printf("1");  
    for(i=lenmax -1;i>=0;i--) 
	{
		if(c[i]!=0)
		break;
	} 
	for(j=i;j>=0;j--)
	{
		printf("%d",c[j]); 
	}
	if(m==0 && n==0)
	break;
	}
    return 0; 
}  
