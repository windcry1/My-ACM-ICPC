#include <stdio.h>
#include <string.h>
int main()
{
    int n;
	while(scanf("%d",&n)!=EOF)
	{
    	int i,j,t,N=0;
    	char a[100][20]={0},s[20],s2[20];
    	for(i=1;i<=n;i++)
    	{
    		scanf("%s",s);
        if(strcmp(s,"Install")==0)
        {
            scanf("%s",s2);
            if(N==0)
                {
					strcpy(a[0],s2);
					N++;
					printf("The software has been installed!\n");
				}
            else
            for(j=0;j<N;j++)
            {
					if(strcmp(a[j],s2)==0)
                    break;
                 if(j==N-1)
                {
					strcpy(a[N],s2);
					N++;
					printf("The software has been installed!\n");
				}
            }
        }
        else if(strcmp(s,"Uninstall")==0)
        {
            scanf("%s",s2);
            if(N==0)
                {
					memset(a[i],0,sizeof(a[0]));
					printf("The software is not found!\n");
				}
            else for(j=0;j<N;j++)
            {
			if(strcmp(a[j],s2)==0)
                {
					memset(a[j],0,sizeof(a[0]));
					printf("The software has been uninstalled!\n");
					break;
				}
             if(j==N-1)
                printf("The software is not found!\n");
            }
        }
        else if(strcmp(s,"Query")==0)
        {
            t=0;
            for(j=0;j<N;j++)
            {    
				if(strcmp(a[j],"360SAFE")==0)
				t++;
				if(strcmp(a[j],"360BROWSER")==0)
				t++;
				if(strcmp(a[j],"QQGUARD")==0)
 				t++;
				if(strcmp(a[j],"360SD")==0)
				t++;
 				if(strcmp(a[j],"360DESKTOP")==0)
                t++;
				if(strcmp(a[j],"360YASUO")==0)
				t++;
 				if(strcmp(a[j],"360WD")==0)
 				t++;
				if(strcmp(a[j],"360SAFEBOX")==0)
 				t++;
            }
            if(t==8)
                printf("Your computer is secure!\n");
            else
                printf("Your computer is not secure!\n");
        }
    }
    }
    return 0;
}
