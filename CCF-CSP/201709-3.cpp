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
char a[10001],b[10001];//���������ַ��������ڱ����ַ��� 
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
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
	}//����ʱ�Զ����˿ո�ͻ��� 
	len=strlen(a);
	j=0;
	for(i=0;i<len;i++)
	{
		if(a[i]=='\\'&&(a[i+1]=='\\'||a[i+1]=='"'))
			b[j++]=a[++i];
		else if(a[i]!='"')
			b[j++]=a[i];
	}//�仯\\ �� \"ͬʱ������������ţ��������洦�� 
	len=strlen(b);
	//puts(b);
	string s,str[81];//s����ָ�ǰ�ģ�str����ָ��� 
	while(k--)
	{
		cin>>s;
		int q=0;//q���ڱ����Ƿ�����Object��String����״̬ 
		int len2=s.length();
		int w=0;//���е��û�е����ۣ���������û�е��̵�ֵ� 
		for(i=0;i<len2;i++)
		{ 
			if(s[i]=='.')
			{ 
				w++;
				break;
			}
		}
		if(!w)//û�е�����
		{
			for(i=0;i<len-len2;i++)
			{
				flag=0;
				for(j=0;j<len2;j++)
				{
					if(b[i+j]==s[j])
						flag++;
				}//�����ִ��������´��� 
				if(flag==len2)
				{
					sum=0;
					for(j=1;j<i+len2;j++)
					{
						if(b[j]=='{')
							sum++;
						else if(b[j]=='}')
							sum--;
					}
					if(sum)//�������֮ǰ��{��}������������һ�����⣩������������֤���ǵ�һ���Ԫ�� 
						continue;
					int bz=0;//bz��Ϊ����ж��Ƿ���OBJECT��STRING 
					if(b[i+len2]==':'&&b[i+len2+1]=='{')
						bz=2;//��:{��ϣ�һ����OBJECT 
					else if(b[i+len2]==':')
					{
						bz=1;//��������������������:һ����STRING 
						head=i+len2+1;//head��ʾSTRING��ʼ��λ�� 
					}
					if(j==len)
						t=j;
					if(bz==2)
					{
						q=1;
						printf("OBJECT\n");
					}
					else if(bz==1)
					{
						q=1;
						printf("STRING ");
						for(j=head;b[j]!=','&&b[j]!='}';j++)
							putchar(b[j]);
						putchar('\n');
					}
				}
			}
			if(!q)//���������OBJECT��STRING������Ͳ����� 
				printf("NOTEXIST\n"); 
		}
		else
		{
			count=1;
			for(i=0;i<len2;i++)
			{
				if(s[i]=='.')
				{
					s[i]=' ';//�е�ĵط����Ͽո񷽱����ַ��������� 
					count++;
				}
			}
			istringstream ss(s);
			for(i=0;i<count;i++)
				ss>>str[i];//�ָ��ַ��� 
			t=0;
			for(int l=0;l<count;l++)//l���ڱ��浱ǰ������ַ����ǵڼ��� 
			{
				len2=str[l].length();
				for(i=t;i<len-len2;i++)//iһ��Ҫ�ӵ�ǰ��λ��֮�������ȡ��һ����λ�� 
				{
					flag=0;
					for(j=0;j<len2;j++)
					{
						if(b[i+j]==str[l][j])
							flag++;
					}//������û�е�����ͬ�� 
					if(flag==len2&&b[i+len2]==':'&&b[i+len2+1]=='{'&&l!=count-1)
					{
						if(l==0)
							head=i+len2;//head��ʾ�տ�ʼ��λ�� 
						t=i+len2+2;//t��ʾ������λ�� 
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]!='{')
					{
						sum=0;
						for(j=head-1;j<i+len2;j++)
						{
							if(b[j]=='{')
								sum++;
							else if(b[j]=='}')
								sum--;
						}
						if(sum!=count-1)//��������ͬ����һ���ĵط���������ֻ����count-1�����������������string�����棬��Ȼ��������Ҳ�ǿ��Եģ��������п��� 
							continue; 
						printf("STRING ");
						q=1;
						for(j=i+len2+1;b[j]!=','&&b[j]!='}';j++)
							putchar(b[j]);
						putchar('\n');
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]=='{')//�����滹��:{��ϵ�ʱ�����OBJECT 
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

