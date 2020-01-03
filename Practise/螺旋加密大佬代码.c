#include<stdio.h>
#include<string.h> 
int main()
{
	int R,C,i,j,t,k;
	char str[100];
	char a[23][23],dic[27][6],dic2[505]="";
	int len;
	int R2,C2;
    scanf("%d %d ",&R,&C); 
    gets(str);
    for(i=0;i<23;i++)
    { 
          for(j=0;j<23;j++)
    		{
		   		a[i][j]='0'; 
		    }
	}              
      for(i=0;i<27;i++)
      {
          t=i;
          for(j=4;j>=0;j--)
           {
             	dic[i][j]=t%2+'0';
             	t=t/2;
           }
        dic[i][5]='\0';
      }
      
      len=strlen(str);
      for(i=0;i<len;i++)
      {
          if(str[i]==' ') strcat(dic2,dic[0]);
          else
          {
              t=str[i]-'A'+1;;
              strcat(dic2,dic[t]);
          }
      }
      if(R==1)
      {
          printf("%s",dic2);
          i=len*5+1;
          while(i<=C)
         {
              printf("0");
              i++;
         }
          printf("\n");
      }
      else if(C==1)
     {
        for(i=0;dic2[i]!='\0';i++)
            printf("%c\n",dic2[i]);
          i=len*5+1;
          while(i<=R)
          {
              printf("0\n");
             i++;
          }
      }
      else
      {
          k=0;
          i=0;j=0;
          R2=R;C2=C;
          while(dic2[k]!='\0')
          {
              for(t=1;t<C&&dic2[k]!='\0';t++)
              	{
			  		a[i][j]=dic2[k];k++;j++;
				}  
              for(t=1;t<R&&dic2[k]!='\0';t++)
             	{
			 		a[i][j]=dic2[k];k++;i++;
				}  
              for(t=1;t<C&&dic2[k]!='\0';t++)
             	{
			  		a[i][j]=dic2[k];k++;j--;
				} 
              for(t=1;t<R&&dic2[k]!='\0';t++)
              	{
					a[i][j]=dic2[k];k++;i--;
			  	} 
              i++;j++;
              R-=2;C-=2;
              if(R==1)
              	{
                  for(t=1;t<=C&&dic2[k]!='\0';t++,k++)
                  	{ 
				  		a[i][j]=dic2[k];j++;
					}
             	 }
              else if(C==1)
              {
                 for(t=1;t<=R&&dic2[k]!='\0';t++,k++)
                {
					a[i][j]=dic2[k];i++;
				}
            }
        }
         for(i=0;i<R2;i++)
        {
            for(j=0;j<C2;j++)
            {
                printf("%c",a[i][j]);
            }
    	}
   }     
    return 0; 
}
