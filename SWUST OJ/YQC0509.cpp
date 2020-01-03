#include<stdio.h>
int main()
{
   int st[12]={31,28,31,30,31,30,31,31,30,31,30,31};	
   int sd[12]={31,29,31,30,31,30,31,31,30,31,30,31};
   int k,m,n,day=0;
   int t1,t2,t3;
   while(scanf("%d%d%d",&k,&m,&n)!=EOF)
   {
   	     if(k==2007)
   	     {
   	     	for(int i=8;i<m-1;i++)
   	     	{
   	     		day+=st[i];
			}
   	     	day+=n;
		}
   	    if(k==2008)
   	    {
   	    	for(int i=0;i<m-1;i++)
   	    	{
   	    		day+=sd[i];
			}
   	    	day=day+122+n;
		}
   	    if(k==2009)
   	    {
   	    	for(int i=0;i<m-1;i++)
   	    	{
   	    	   day+=st[i];
			}
   	    	day=day+122+366+n;	
		}
   	    if(k==2010)
   	    {
   	    	for(int i=0;i<m-1;i++)
   	    	{
   	    		day+=st[i];
	     	}
   	    	day=day+122+366+365+n;
   	    }
   	    	t1=day/7;
	        t2=day%7;
	      if(t2==3)
	      {
	           printf("ALL\n");
	      }
	     else if(t2>3)
	    {
		    t3=(day-t1-1)%4;
	        if(t3==1)
	        {
	    	    printf("B\n");
	        }
		    else if(t3==2)
		    {
			    printf("X\n");
		    }
		    else if(t3==3)
		    {
		        printf("H\n");
		    }
		    else
		    {
			    printf("P\n");
		    }
	    }
	     else if(t2<3)
	     {
		    t3=(day-t1)%4;
	        if(t3==1)
	        {
	    	    printf("B\n");
		    }
		    else if(t3==2)
		    {
			    printf("X\n");
		    }
		    else if(t3==3)
		    {
		        printf("H\n");
		    }
		     else
		    {
			    printf("P\n");
		    }
	    }
	}
	return 0;
}
