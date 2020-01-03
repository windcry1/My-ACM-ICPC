//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
char a[10001],b[10001];
int main()
{
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
	int n,k;
	scanf("%d%d",&n,&k);
	getchar();
	int i=0,j=0,flag=0,t,len,head=0,count,sum=0;
	char c;
	while(1)
	{
		c=getchar();
		if(c==' ')
			continue;
		else if(c=='\n')
			flag++;
		else a[i++]=c;
		if(flag==n)
			break;
	}
	len=strlen(a);
	j=0;
	for(i=0;i<len;i++)
	{
		if(a[i]=='\\'&&(a[i+1]=='\\'||a[i+1]=='"'))
			b[j++]=a[++i];
		else
			b[j++]=a[i];
	}
	len=strlen(b);
	//puts(b);
	char str[81][81];
	while(k--)
	{
		cin>>str[0];
		char s[81]="\"";
		strcat(s,str[0]);
		strcat(s,"\"");
		int q=0;
		int len2=strlen(s);
		int w=0;
		for(i=0;i<len2;i++)
			if(s[i]=='.')
				w++;
		if(!w)//没有点的情况
		{
			for(i=0;i<len-len2;i++)
			{
				flag=0;
				for(j=0;j<len2;j++)
				{
					if(b[i+j]==s[j])
						flag++;
				}
				if(flag==len2)
				{
					sum=0;
					for(j=1;j<i+len2;j++)
					{
						if(b[j-1]=='"'&&b[j]==':'&&b[j+1]=='{')
							sum++;
						else if(b[j-1]=='"'&&b[j]=='}'&&b[j+1]==',')
							sum--;
					}
					if(sum)
						break;
					int maohao=0;
					for(j=i+len2;j<len;j++)
					{
						if(b[j]==':')
						{
							maohao++;
							head=j+1;
						}
						else if((b[j]==','||b[j]=='}'))
						{
							t=j;
							break;
						}
					}
					if(j==len)
						t=j;
					if(maohao>=2)
					{
						q=1;
						printf("OBJECT\n");
					}
					else if(maohao==1)
					{
						q=1;
						printf("STRING ");
						for(j=head+1;j<t-1;j++)
							putchar(b[j]);
						putchar('\n');
					}
				}
			}
			if(!q)
				printf("NOTEXIST\n");
		}
		else
		{
			count=1;
			for(i=0;i<len2;i++)
			{
				if(s[i]=='.')
				{
					len2+=2;
					for(j=len2;j>=i;j++)
						s[j]=s[j-3];
					s[i]='"';
					s[i+1]=' ';
					s[i+2]='"';
					count++;
				}
			}
			istringstream ss(s);
			for(i=0;i<count;i++)
			{
				str[i]="\"";
				ss>>str[i];
			}
			t=0;sum=0;
			for(int l=0;l<count;l++)
			{
				len2=str[l].length();
				for(i=t;i<len-len2;i++)
				{
					flag=0;
					for(j=0;j<len2;j++)
					{
						if(b[i+len2+1]!='{'&&l!=count-1&&b[i+len2]==':')
							break;
						if(b[i+j]==str[l][j])
							flag++;
					} 
					if(flag==len2&&b[i+len2]==':'&&b[i+len2+1]=='{'&&l!=count-1)
					{
						if(l==0)
							head=i+len2;
						sum++;
						t=i+len2+2;
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]!='{')
					{
						sum=0;
						for(j=head-1;j<i+len2;j++)
						{
							if(b[j-1]=='"'&&b[j]==':'&&b[j+1]=='{')
								sum++;
							else if(b[j-1]=='"'&&b[j]=='}'&&b[j+1]==',')
								sum--;
						}
						if(sum!=count-1)
							break;
						printf("STRING ");
						q=1;
						for(j=i+len2+2;;j++)
						{
							if(b[j]=='}'||b[j]==',')
							{
								t=j;
								break;
							}
						}
						for(j=i+len2+2;j<t-1;j++)
							putchar(b[j]);
						putchar('\n');
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]=='{')
					{
						printf("OBJECT\n");
						q=1;
						break;
					}
				}
			}
			if(!q)
				printf("NOTEXIST\n");
		}
	}
	return 0;
}

