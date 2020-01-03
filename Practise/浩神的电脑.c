#include<stdio.h>
#include<string.h> 
int main()
{
	char str2[100],str3[100],str1[100][100];
	int n,i,j;
	while(scanf("%d",&n)!=EOF)
	{ 
	int a[100]={0};
	getchar();
	for(i=0;i<n;i++)
	{
		gets(str2);
		if(strcmp(str2,"Query")==0)
			{
				if(a[0]==1&&a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==1&&a[7]==1)
				printf("Your computer is secure!\n");
				else printf("Your computer is not secure!\n");
			}	
				if(strcmp(str2,"Install 360SAFE")==0&&a[0]==0)
				{
				a[0]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360BROWSER")==0&&a[1]==0)
				{
				a[1]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install QQGUARD")==0&&a[2]==0)
				{
				a[2]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360SD")==0&&a[3]==0)
				{
				a[3]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360DESKTOP")==0&&a[4]==0)
				{
				a[4]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360YASUO")==0&&a[5]==0)
				{
				a[5]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360WD")==0&&a[6]==0)
				{
				a[6]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360SAFEBOX")==0&&a[7]==0)
				{
				a[7]=1;printf("The software has been installed!\n");
				}
				else if(strcmp(str2,"Install 360SAFE")==0&&a[0]==1)
				{
				}
				else if(strcmp(str2,"Install 360BROWSER")==0&&a[1]==1)
				{
				}
				else if(strcmp(str2,"Install QQGUARD")==0&&a[2]==1)
				{
				}
				else if(strcmp(str2,"Install 360SD")==0&&a[3]==1)
				{
				}
				else if(strcmp(str2,"Install 360DESKTOP")==0&&a[4]==1)
				{
				}
				else if(strcmp(str2,"Install 360YASUO")==0&&a[5]==1)
				{
				}
				else if(strcmp(str2,"Install 360WD")==0&&a[6]==1)
				{
				}
				else if(strcmp(str2,"Install 360SAFEBOX")==0&&a[7]==1)
				{
				}
				if(strcmp(str2,"Uninstall 360SAFE")==0&&a[0]==1)
				{
				a[0]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360BROWSER")==0&&a[1]==1)
				{
				a[1]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall QQGUARD")==0&&a[2]==1)
				{
				a[2]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360SD")==0&&a[3]==1)
				{
				a[3]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360DESKTOP")==0&&a[4]==1)
				{
				a[4]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360YASUO")==0&&a[5]==1)
				{
				a[5]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360WD")==0&&a[6]==1)
				{
				a[6]=0;printf("The software has been uninstalled!\n");
				}
				else if(strcmp(str2,"Uninstall 360SAFEBOX")==0&&a[7]==1)
				{
				a[7]=0;printf("The software has been uninstalled!\n");
				}
		}
	} 
	return 0;
} 
